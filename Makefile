T = template/t.cc
M = template/memo.txt

agc021 :
	mkdir $@
	cp ${T} $@/a.cc
	# cp ${T} $@/b.cc
	# cp ${T} $@/c.cc
	# cp ${T} $@/d.cc
	# cp ${T} $@/e.cc
	# cp ${T} $@/f.cc
	cp ${M} $@/
