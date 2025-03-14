# 🎯 Jogo Secreto em C

## 📌 Descrição

Um jogo simples de adivinhação em C, onde o jogador tenta adivinhar um número secreto entre **1 a 100**. O programa gera um número aleatório e dá dicas se o chute foi muito alto ou muito baixo até o jogador acertar.

## 🛠️ Como funciona?

- O cabeçalho em arte ASCII dá um toque especial.
- O número secreto é gerado aleatoriamente com `rand() % 100 + 1`.
- O loop `do-while` continua até o jogador acertar o número.
- Mensagens informam se o chute foi muito alto ou muito baixo.

## 🚀 Como executar o código?

1️⃣ **Compile o código:**
```bash
gcc jogo_secreto.c -o jogo_secreto
```

2️⃣ **Execute o programa:**
```bash
./jogo_secreto
```

## 🖥️ Exemplo de saída
```
 ___________________________
|                           |
|     ADIVINHE O NUMERO     |
|        (um a cem)         |
|      (numero inteiro)     |
|___________________________|

Tente adivinhar o numero sabendo que ele e inteiro >> 50
Esse numero ainda esta pequeno, chute mais alto
Tente adivinhar o numero sabendo que ele e inteiro >> 75
Esse numero ainda esta alto, chute mais baixo
Tente adivinhar o numero sabendo que ele e inteiro >> 63
VOCE ACERTOU :)
```

## 🧐 Melhorias futuras
- Limitar o número de tentativas.
- Adicionar níveis de dificuldade.
- Criar uma versão com interface gráfica.

## 📂 Estrutura do projeto
```
📂 jogo_secreto
│
├── jogo_secreto.c
├── README.md
```

## 📜 Licença
Este projeto é de código aberto e feito para fins de aprendizado. 😊

