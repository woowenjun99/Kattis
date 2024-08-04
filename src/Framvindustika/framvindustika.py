p, w = map(int, input().split())
completed = int(w * p / 100) * "#"
incomplete = (w - int(w * p / 100)) * "-"
if p >= 0 and p <= 9: final = f"  {p}%"
elif p == 100: final = "100%"
else: final = f" {p}%"
print("[" + completed + incomplete + "] | " + final)
