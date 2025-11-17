# Projeto Arduino – Acionamento de LED com Dois Botões (Lógica AND)

Este projeto demonstra o uso de dois botões para controlar um LED utilizando uma lógica **AND**. O LED só acende quando **ambos** os botões estão pressionados ao mesmo tempo.  
A simulação foi desenvolvida no **Tinkercad**, servindo como estudo prático de eletrônica e programação com Arduino.

---

## 🧭 Objetivo do Projeto

- Ler o estado de dois botões digitais  
- Aplicar uma condição lógica AND  
- Acionar um LED somente quando ambos estiverem HIGH  
- Demonstrar conceitos de lógica digital em hardware real/simulado  

---

## 🧩 Componentes Utilizados

- Arduino Uno  
- 2 Push Buttons  
- 1 LED  
- 1 Resistor (LED)  
- Resistores (pull-down)  
- Protoboard e jumpers  
- Tinkercad (simulação)

---

## 🔌 Funcionamento

O LED só acende quando **Button1** e **Button2** estão pressionados ao mesmo tempo.  
Se qualquer um estiver solto, o LED permanece apagado.

Esse comportamento reproduz a operação de uma **porta lógica AND** no Arduino.

---

## 🧠 Resumo da Lógica do Código

- Os estados dos botões são lidos com `digitalRead()`.  
- Uma condição AND verifica se os dois estão HIGH.  
- O LED é acionado com `digitalWrite()`.

## 📂 Estrutura do Repositório
📁 Projeto_01
 ├── README.md
 └── Projeto_01.ino
