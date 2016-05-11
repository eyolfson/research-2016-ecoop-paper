import sys

for filename in sys.argv[1:]:
  with open(filename, 'r') as f:
    max_len = 0
    for l in f:
      line = l.rstrip()
      if len(line) > max_len:
        max_len = len(line)
      #print([l.rstrip()])
    f.seek(0)
    for l in f:
      line = l.rstrip()
      strings = list(line + (' ' * (max_len - len(line))))
      strings = [x.replace('{', '\{') for x in strings]
      strings = [x.replace('}', '\}') for x in strings]
      strings = [x.replace('%', '\%') for x in strings]
      strings = [x.replace('_', '\_') for x in strings]
      strings = [x.replace('&', '\&') for x in strings]
      strings = [x.replace('[', r'\lbrack') for x in strings]
      strings = [x.replace(']', r'\rbrack') for x in strings]
      strings = [x.replace('|', r'\textbar') for x in strings]
      strings = [x.replace('~', r'\textasciitilde') for x in strings]
      print(" & ".join(strings) + r' \\')
