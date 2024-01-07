from autokattis import Kattis
from dotenv import load_dotenv
import os

load_dotenv()
kattis = Kattis(os.getenv("EMAIL"), os.getenv("PASSWORD"))
problems = kattis.problems()
diff_mapper = { problem["id"]: problem["difficulty"] for problem in problems }