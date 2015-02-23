%lugar(Regiao,Estado,Capital,Grande).

lugar(norte,acre,'rio branco',pequena).
lugar(nordeste,alagoas,maceio,pequena).
lugar(norte,amapa,macapa,pequena).
lugar(norte,amazonas,manaus,pequena).
lugar(nordeste,bahia,salvador,grande).
lugar(nordeste,ceara,fortaleza,grande).
lugar('centro-oeste','distrito federal',brasilia,grande).
lugar(sudeste,'espirito santo',vitoria,pequena).
lugar('centro-oeste',goias,goiania,pequena).
lugar(nordeste,maranhao,'sao luiz',pequena).
lugar('centro-oeste','mato grosso',cuiaba,pequena).
lugar('centro-oeste','mato grosso do sul','campo grande',pequena).
lugar(sudeste,'minas gerais','belo horizonte',grande).
lugar(norte,para,belem,pequena).
lugar(nordeste,paraiba,'joao pessoa',grande).
lugar(sul,parana,curitiba,grande).
lugar(nordeste,pernambuco,recife,grande).
lugar(nordeste,piaui,teresina,pequena).
lugar(sudeste,'rio de janeiro','rio de janeiro',grande).
lugar(nordeste,'rio grande do norte',natal,pequena).
lugar(sul,'rio grande do sul','porto alegre',grande).
lugar(norte,rondonia,'porto velho',pequena).
lugar(norte,roraima,'boa vista',pequena).
lugar(sul,'santa catarina',florianopolis,grande).
lugar(sudeste,'sao paulo','sao paulo',grande).
lugar(nordeste,sergipe,aracaju,pequena).
lugar(norte,tocantins,palmas,pequena).

%a. Escreva uma consulta para encontrar todas as capitais pequenas.
c_pequenas(X):-
	lugar(_,_,X,pequena).

%b. Escreva uma consulta para encontrar todos os estados que tem capitais pequenas.
e_pequenas(X):-
	lugar(_,X,_,pequena).

%c. Escreva uma consulta para encontrar todos os estados na regiao nordeste com capitais grandes.
n_grandes(X):-
	lugar(nordeste,X,_,grande).

%d. Formule uma regra para definir cidades cosmopolitas como sendo capitais grandes dos estados nas regioes sul e sudeste.
cosmop(X):-
	lugar(sul,_,X,grande)
	;lugar(sudeste,_,X,grande).

%e. Escreva uma consulta para encontrar todas as cidades cosmopolitas.
%cosmop(X).
