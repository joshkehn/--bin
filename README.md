# bin Scripts

This repo contains various bin scripts that I use. Nothing here is explicitly personal, so the repo is public. If you find some use in it let me know. Don't expect things to be well commented or even well written. It's quick. It's dirty. It makes my life easier.

## bdate

My blog posts use the number of milliseconds since epoch to judge time. This is a quick output to the clipboard (in OSX) of the current seconds since epoch with "000" tacked on to the end without a newline.

## checklb

Pings my domain every second and then parses out the `X-Forward` header I set to see which server is actually responding.

## im

I collect links by day into files. This gives me a quick way of storing them because I always have a terminal open. If run without arguments it will copy all the links to the clipboard (OSX) for easy pasting.

## phrase

I have a list of phrases in various languages I use infrequently when I tire of English. This allows me to easily search and list all matching phrases / words.

## shuf

Shuffles the input lines around using `awk`.
