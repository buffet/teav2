# teav2
tea for two  
Telegram Experience Assistant

Tired of manually using the Telegram API? Don't know how to decode that bytestream?  
Fear not, teav2 (this time really version 2, since the old library sucks) is here for you!

## Table of Contents (to fill this readme)
- [Goals](#goals)
- [Dependencies](#dependencies)
- [Building](#building)
- [Documentation](#documentation)
- [Contributing](#contributing)
- [License](#license)

## Goals
- [ ] CLI message sending
- [ ] Interactive client
- [ ] Passive mode
- [ ] Mattermost- / Slack-like threads
- [ ] Another layer of encryption

## Dependencies
- [tdlib](https://github.com/tdlib/td)

## Building
1. `git clone --recursive https://gitlab.com/countingsort/teav2`
2. `mkdir build`
3. `cd build`
4. `cmake -DCMAKE_BUILD_TYPE=Release ..`
5. `cmake --build .`
6. Profit!

## Documentation
Yes! Not now though; this readme is already way more than I normally write.

Try `cargo run -- -h` though.

## Contributing
Found a bug? Got a feature you want added? Fix it yourself and open a pull request! Or at least open an issue.

## License
This software is published under the MIT license. See LICENSE for for more details.
