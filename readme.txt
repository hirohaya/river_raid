 Alunos:
    João Henrique Luciano 8535957
    Lucas Hiroshi Hayashida 7557630
    Ludmila Ferreira Vicente e Silva 7557136
    Pedro de Carvalho Rodrigues NUSP 7580863
    
    
    
 Relato do trabalho:
    Durante o desenvolvimento da fase 1 do projeto, nos deparamos com alguns problemas que vamos relatar aqui.
    Após decidir os elementos do jogo e suas estruturas, tomamos a decisão de criar o cenário a partir de uma lista encadeada com cabeça para facilitar a sua manipulação e ficamos um bom tempo decidindo qual seria o melhor tipo de lista dada a dinâmica do jogo. Também tivemos que decidir como seriam as linhas e as unidades que formam a linha. Confundimos bastante por se tratar de structs dentro de structs, enums e unions. Estávamos acreditando que nessa fase do EP deveríamos imprimir na tela o cenário e realmente pensamos em entregá-lo assim e com um executável de teste em sepado. Percebemos que não funcionaria pois a impressão na tela ficaria distante do que queríamos e de o monitor explicar que isso não era necessário agora e que nas outras fases a dinâmica vai ser diferente. Então retiramos a criação de uma linha a partir da outra e decidimos que o main principal levaria apenas a criação de uma linha, pois nossa função de criar a linha recebe as funções de criar os outros elementos do jogo, além de criar um main de teste, que chama cada função de criação para testá-las.
    No último momento tivemos um problema terrível com a distribuição das structs nos .h. Após algumas alterações, percebemos que estavamos entrando em loop na hora da compilação e tivemos muita dificuldade para consertar o problema. Então decidimos colocar todas as structs, union e enum em um "elementos.h" para eliminar o loop da compilação, mas não sabemos se isso é uma boa prática e pretendemos alterar isso para as próximas fases.
    Por último, encontramos MUITOS problemas com as estuturas de dados e isso nos tomou muito tempo no último dia e infelizmente não conseguimos testar todas as funções.
    Para testar o código dê make na pasta teste; para rodar o código com o main original dê make na pasta ep1.
