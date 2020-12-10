# wasm_by_em
this is my wasm learning log

10901  2020-12-09 14:04  git clone https://github.com/juj/emsdk.git
10902  2020-12-09 14:04  cd emsdk
10903  2020-12-09 14:04  ./emsdk install sdk-incoming-64bit binaryen-master-64bit
10904  2020-12-09 14:05  ./emsdk list
10905  2020-12-09 14:05  ./emsdk install
10906  2020-12-09 14:06  ./emsdk install latest
10907  2020-12-09 14:09  ./emsdk active latest
10908  2020-12-09 14:09  ./emsdk activate last
10909  2020-12-09 14:09  ./emsdk activate latest
10910  2020-12-09 14:10  echo 'source "~/works/emsdk/emsdk_env.sh"' >> ~/.zshrc
10911  2020-12-09 14:11  emsdk
10913  2020-12-09 14:12  emsdk
10917  2020-12-09 21:42  emcc hello.c -s WASM=1 -o hello.html
10918  2020-12-09 21:43  emrun --no_browser --port 8123
10919  2020-12-09 21:43  emrun --no_browser --port 8123 .
10920  2020-12-09 21:44  emcc hello.c -s WASM=1 -o hello.html
10921  2020-12-09 21:44  emrun --no_browser --port 8123 .
10927  2020-12-09 21:47  em++ good.cpp -s WASM=1 -O good.html
10928  2020-12-09 21:47  em++ good.cpp -s WASM=1 -o good.html
10929  2020-12-09 21:48  emrun --no_browser --port 8123 .
10940  2020-12-09 21:56  emcc int.c -s WASM=1 -o int.html
10941  2020-12-09 21:57  emrun --no_browser --port 8123 .
10942  2020-12-09 21:58  cd ~/works/emsdk/test
10954  2020-12-09 22:03  emcc int.c -s WASM=1 -o int.html
10956  2020-12-09 22:13  emrun --no_browser --port 8123 .
10957  2020-12-09 22:14  emcc int.c -s WASM=1 -o int.html
