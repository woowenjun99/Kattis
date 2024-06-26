# Credits to Russell Dash
from autokattis import Kattis
from dotenv import load_dotenv
import os

# Load all the difficulty of the problems from Kattis.
load_dotenv()
kattis = Kattis(os.getenv("EMAIL"), os.getenv("PASSWORD"))
problems = kattis.problems()
diff_mapper = { problem["id"]: problem["difficulty"] for problem in problems }

file_whitelist = {'bnn_accuracy.py', 'testing_tool.py', 'unununion_find.py', 'comp.py'}
image_src = 'https://github.com/abrahamcalf/programming-languages-logos/blob/master/src/' # hey this a credit!
image_mapper = {
    'py':   'python',
    'c':    'c',
    'cpp':  'cpp',
    'cs':   'csharp',
    'go':   'go',
    'hs':   'haskell',
    'java': 'java',
    'kt':   'kotlin',
    'php':  'php',
    'rb':   'ruby',
    'js':   'javascript'
}
get_image = lambda e,s=24: f'{image_src}{image_mapper[e]}/{image_mapper[e]}_{s}x{s}.png'

total_score = 0.0
contents = []
for main_dir in ['src', 'Secret']:
    for path, dirs, files in os.walk(main_dir):
        ori_path, path = path, path.split(os.sep)

        if main_dir == 'src':
            if len(path) == 2 and path[1] != '.nus': path, nus = path[1], False
            elif len(path) == 3 and path[1] == '.nus': path, nus = path[2], True
            else: continue
        else:
            if not files or path[-1] in ['TLE', 'WA', 'RTE', 'MLE', 'OLE', 'CE', 'Secret']: continue
            elif len(path) == 5 and path[3] == '.nus': path, nus = path[4], True
            elif len(path) == 4 and path[2] == '.nus': path, nus = path[3], True
            elif len(path) == 4 and path[3] != '.nus': path, nus = path[3], False
            elif len(path) == 3 and path[2] != '.nus': path, nus = path[2], False
            else: continue

        ori_path = ori_path.replace("?", "%3f")
        hyps = []
        has_py = has_cpp = False; has_java = []
        for file in sorted(files):
            ext = file.split('.')[-1]
            if ext in image_mapper and file not in file_whitelist:
                if main_dir == 'src': hyps.append(f"[![{ext}]({get_image(ext)})]({ori_path}/{file})")
                else: hyps.append(f"[![{ext}]({get_image(ext)})]()")
            if not has_cpp and ext == 'cpp': has_cpp = file
            if not has_java and ext == 'java': has_java.append(file.lower())
            if not has_py and file not in file_whitelist and ext == 'py': has_py = file
        has_java = min(has_java) if has_java else []

        # special cases
        if path == '99 Problems (2)': has_py = has_cpp = has_java = '99problems2'
        elif path == '10 Kinds of People': has_py = has_cpp = has_java = '10kindsofpeople'
        pid = (has_py or has_cpp or has_java).split('.')[0].split('-')[0] # another split to handle /autori

        url = f"https://open.kattis.com/problems/{pid}"
        total_score += diff_mapper[pid]

        if diff_mapper: contents.append([pid, f"|[{path}]({url})| {pid} |{diff_mapper[pid]}|{''.join(hyps).replace(' ','%20')}|\n"]); diff_mapper.pop(pid)
        else:           contents.append([pid, f"|[{path}]({url})| {pid} |{''.join(hyps).replace(' ','%20')}|\n"])

with open('README.md', 'w+') as f:
    f.seek(0)
    f.write(f'# Total problems solved: {len(contents)}\n\n')
    f.write(f"## Total score: {round(total_score, 2)}\n\n")
    f.write('\n\n'.join([
        'Note that the table below is auto-generated using [autokattis](https://github.com/RussellDash332/autokattis).\n\n' +
        f"Average difficulty per question: {round(total_score / len(contents), 2)}"
    ])+'\n\n')
    if diff_mapper != None: f.write('|Problem Name|Problem ID|Difficulty|Languages|\n|:---|:---|:---|:---|\n')
    else:                   f.write('|Problem Name|Problem ID|Languages|\n|:---|:---|:---|\n')
    for key, content in sorted(contents): f.write(content)
print('Build done! Mapper exists:', diff_mapper != None)