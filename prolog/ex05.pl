instrutor(chan,math273).
instrutor(patel,ee222).
instrutor(grossman,cs301).
matriculado(kevin,math273).
matriculado(joana,ee222).
matriculado(joana,cs301).
matriculado(kiko,math273).
matriculado(kiko,cs301).


%a. Formule a regra eProfessorDe(P,A) que indica que o professor e professor do aluno A.
eProfessorDe(P,A):-
	instrutor(P,X)
       ,matriculado(A,X).

%b. Realize a consulta instrutor(patel,cs301).
= FALSE

%C. Realize a consulta instrutor(grossman,X).
= X = cs301. 

%d. Realize a consulta eProfessorDe(patel,X).
= X = joana.

%e. Realize a consulta eProfessorDe(X,kiko).
= X = chan ; X = grossman.

%f. Realize a consulta eProfessorDe(joana,X).
= FALSE
