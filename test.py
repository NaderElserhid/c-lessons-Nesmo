import base64
import hashlib
import hmac

header = "eyJ0eXAiOiJKV1QiLCJhbGciOiJIUzUxMiJ9"
payload_data = b'{"role":"admin"}'

payload = base64.urlsafe_b64encode(
    payload_data
).rstrip(b"=").decode()

message = f"{header}.{payload}".encode()

signature = hmac.new(
    b"lol",
    message,
    hashlib.sha512
).digest()

signature = base64.urlsafe_b64encode(
    signature
).rstrip(b"=").decode()

token = f"{header}.{payload}.{signature}"

print(token)