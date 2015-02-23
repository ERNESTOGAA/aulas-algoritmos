mae(joilma,henrique).
mae(joana, alice).
mae(alice, tesla).

pai(carminho,henrique).
pai(stephen, alice).
pai(henrique, tesla).

avo(A,N):-
(
	pai(A,P)
	,(
		pai(P,N)
		;mae(P,N)
	)
).
