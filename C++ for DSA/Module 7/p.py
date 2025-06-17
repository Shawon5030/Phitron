import requests

# Your copied cookies from DevTools
cookies = {
    'connect.sid': "s%3AZZrbH0D6z0Fq_4-KWavPrZGAzymxfM07.tMC%2Fcct%2FEYms34BFZ%2FEVSOdEZhg6L714pjqCW9%2BUAgc",
    'SID': 'g.a000yAjhbz24m7D0eJn06imH9mRpBDycLuSU2VwgX_9pu8AhieMZShUr2u2RPQurDQ3c8lrUowACgYKAYASARQSFQHGX2MiWQrz6ZLPzQIENuOQ9g4KlRoVAUF8yKpmu-m018Z-cOqOSGyHJMnF0076',
    '__stripe_mid':"852a2753-319f-40cb-8c33-9734ea1109aea3c928",
    "__stripe_sid":"075440b6-c9b3-4611-8438-490c094b4f6e33b91e",
    "_ga":"GA1.1.569572648.1739281191",
    "_ga_0R8MW5MZT2":"GS2.1.s1749873772$o144$g1$t1749875431$j60$l0$h0"
    
    
    # Add more if needed
}



headers = {
    'User-Agent': 'Mozilla/5.0',
    'Referer': 'https://phitron.io/',
    'Origin': 'https://phitron.io/',
}

session = requests.Session()
session.headers.update(headers)
session.cookies.update(cookies)

# Try to load a page that requires login
res = session.get('https://phitron.io/')

if "Dashboard" in res.text or "My Courses" in res.text:
    print("✅ Login successful! Protected content loaded.")
else:
    print("❌ Login failed or session invalid. Showing public page.")
    print(res.text[:1000])  # Show first 1000 chars for debugging
