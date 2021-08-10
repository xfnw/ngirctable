# ngirctable salt hostname

i got fed up with
[ngircd](https://github.com/ngircd/ngircd)'s horrible
cloaking (for some stupid reason, they dont propogate real
hostnames, so as an oper you need to **remote whois**
everyone you want to see the ip of)

so i made this. if you have the CloakHostSalt and 5gb of
free space you can store a table of all ipv4 host cloaks (in
my experience, ban evaders seem to almost always use ipv4
with no rdns for some reason lol)

# ngirchash salt hostname

hash a single input, allows arbitrary strings as long as
they are small

# a word of warning
im clueless when it comes to C, it does zero input
validation, so it does weird stuff when
you give it weird input (fun! memory leaks!)

dont use this anywhere security is a consideration *at all*.

