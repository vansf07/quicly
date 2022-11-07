Quicly with NewIP [![CI](https://github.com/h2o/quicly/actions/workflows/ci.yml/badge.svg)](https://github.com/h2o/quicly/actions/workflows/ci.yml)
===

Quicly is a QUIC implementation, written from the ground up to be used within the H2O HTTP server.

The software is licensed under the MIT License.

Machine details
---
OS: Ubuntu 21.10

Kernel-Version: 5.13.0-23-generic


Dependencies:
---
```
sudo apt-get install libssl-dev
```
```
sudo apt-get update && sudo apt-get install build-essential
```
```
sudo apt install cpanminus
```
```
sudo cpan JSON
```
```
sudo apt-get install faketime libscope-guard-perl libtest-tcp-perl
```
```
sudo apt install net-tools
```
```
sudo apt-get install cmake
```



Setup:
---

```
git clone https://github.com/vansf07/quicly.git
```
```
git submodule update --init --recursive
```
```
cmake .
```
```
make
```
Running the test:
---

```
make check
```


Running a server and client instance:
---

Certificate generation
--
```
openssl req -x509 -sha256 -nodes -days 365 -newkey rsa:2048 -keyout server.key -out server.crt 
```
Server:
--
 ```
sudo ./cli -c server.crt -k server.key 127.0.0.1 4433   
```
Client:
--
```
sudo ./cli 127.0.0.1 4433  
```

