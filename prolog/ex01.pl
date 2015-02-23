mae(joilma,felipe).
mae(joilma,henrique).
mae(joana, hebert).
mae(joana, alice).

pai(carminho,felipe).
pai(carminho,henrique).
pai(stephen, hebert).
pai(stephen, alice).

irmao(X,Y):-
    (   
    mae(M,X)
   ,mae(M,Y)
    )
    ,   
    (   
    pai(P,X)
   ,pai(P,Y)
    ).
