function gpw {
  systemd-ask-password | tr -d "\n" | mpw -u "$MPW_FULLNAME" -F none -c ${MPW_COUNTER:-1} -t x -m 0 -q $1 | xsel -i
}
