"""
This file is used to start multiple runs on a remote machine and notify in case of errors or when finished
"""
import subprocess

import http.client, urllib
token = ""
user = ""

script_path = 'project/initial_reducer.py'
num_runs = 40
flags = ['-t']

conn = http.client.HTTPSConnection("api.pushover.net:443")
conn.request("POST", "/1/messages.json",
urllib.parse.urlencode({
    "token": token,
    "user": user,
    "message": f"Starting reduction process",
}), { "Content-type": "application/x-www-form-urlencoded" })

for i in range(num_runs):
    subprocess.run(['python', script_path] + flags)
    conn = http.client.HTTPSConnection("api.pushover.net:443")
    conn.request("POST", "/1/messages.json",
    urllib.parse.urlencode({
        "token": token,
        "user": user,
        "message": f"Completed run {i}/{num_runs}",
    }), { "Content-type": "application/x-www-form-urlencoded" })
    conn.getresponse()
    conn.close()

conn = http.client.HTTPSConnection("api.pushover.net:443")
conn.request("POST", "/1/messages.json",
urllib.parse.urlencode({
    "token": token,
    "user": user,
    "message": f"Finished execution",
}), { "Content-type": "application/x-www-form-urlencoded" })
conn.getresponse()
conn.close()