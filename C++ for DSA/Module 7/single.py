import requests
from http.cookiejar import LWPCookieJar
from bs4 import BeautifulSoup
import getpass

def advanced_fb_login_check(uid, password):
    session = requests.Session()
    session.cookies = LWPCookieJar()

    # Mobile headers (emulating Facebook app browser)
    session.headers.update({
        'Host': 'm.facebook.com',
        'Connection': 'keep-alive',
        'Cache-Control': 'max-age=0',
        'Upgrade-Insecure-Requests': '1',
        'User-Agent': 'Mozilla/5.0 (Linux; Android 10; SM-G973F) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/94.0.4606.61 Mobile Safari/537.36',
        'Accept': 'text/html,application/xhtml+xml,application/xml;q=0.9,image/webp,*/*;q=0.8',
        'Referer': 'https://m.facebook.com/',
        'Accept-Encoding': 'gzip, deflate',
        'Accept-Language': 'en-US,en;q=0.9'
    })

    login_data = {
        'email': uid,
        'pass': password
    }

    try:
        res = session.post("https://m.facebook.com/login.php", data=login_data, timeout=20)

        # Convert cookies to dict
        cookies_dict = {cookie.name: cookie.value for cookie in session.cookies}

        # Detect login result
        if 'c_user' in cookies_dict:
            print(f"[OK] Login successful for {uid}")
            session.cookies.save(f"cookies_{uid}.txt", ignore_discard=True)
        elif 'checkpoint' in cookies_dict:
            print(f"[CP] Account checkpointed: {uid}")
        else:
            # Optional: show partial HTML content for debug
            soup = BeautifulSoup(res.text, 'html.parser')
            error = soup.find('div', {'id': 'login_error'})
            if error:
                print(f"[FAIL] Facebook says: {error.text.strip()}")
            else:
                print(f"[FAIL] Login failed (wrong password or blocked): {uid}")
    except Exception as e:
        print(f"[ERROR] {e}")


if __name__ == "__main__":
    uid = "100076803278386"
    password = "haquemahmudul600@facebook."
    advanced_fb_login_check(uid, password)
