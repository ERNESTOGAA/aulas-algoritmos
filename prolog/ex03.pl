patrao(miguel,joana).
patrao(judite,miguel).
patrao(anita,judite).
patrao(judite,kim).
patrao(kim,henrique).
patrao(anita,samuel).
patrao(henrique,jeferson).
patrao(miguel,hamal).

supervisor(X,Y) :- patrao(X,Y).
supervisor(X,Y) :- patrao(X,Z), supervisor(Z,Y).


%%%%%%%%%%%%%%%%%%%
%    Respostas	  %
%%%%%%%%%%%%%%%%%%%

% a) patrao(X,samuel) = anita
% b) patrao(judite,X) = miguel, kim
% c) supervisor(anita,X) = judite, samuel, miguel, kim, joana, hamal, henrique, jeferson
% d) supervisor(miguel,X) = joana, hamal
% e) supervisor(X,henrique) = kim, anita, judite
