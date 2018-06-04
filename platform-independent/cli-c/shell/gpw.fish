function gpw --description 'Get password'
  set -gq MPW_COUNTER; or set -g MPW_COUNTER 1
  systemd-ask-password | tr -d "\n" | mpw -u "$MPW_FULLNAME" -F none -c $MPW_COUNTER -t x -m 0 -q $argv[1] | xsel -i
end
