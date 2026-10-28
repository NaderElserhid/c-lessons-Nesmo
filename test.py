import hashlib
import urllib.parse
import urllib.request


urls = [
    "https://facebook.com",
    "https://twitter.com",
    "https://slack.com"
]

for url in urls:
    print(url, hashlib.md5(url.encode()).hexdigest())



url = "https://google.com"
h = hashlib.md5(url.encode()).hexdigest()

target = (
    "http://challenge01.root-me.org/web-serveur/ch52/"
    + "?url=" + urllib.parse.quote(url, safe="")
    + "&h=" + h
)

print("Generated hash:", h)
print("Challenge URL:", target)

response = urllib.request.urlopen(target)
print(response.geturl())
print(response.read().decode())