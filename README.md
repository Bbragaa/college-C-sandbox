# Exercícios da Universidade – Programação & CS

[![Contribuidores](https://img.shields.io/github/contributors/USERNAME/REPO.svg?style=for-the-badge)](https://github.com/USERNAME/REPO/graphs/contributors)
[![Forks](https://img.shields.io/github/forks/USERNAME/REPO.svg?style=for-the-badge)](https://github.com/USERNAME/REPO/network/members)
[![Stars](https://img.shields.io/github/stars/USERNAME/REPO.svg?style=for-the-badge)](https://github.com/USERNAME/REPO/stargazers)
[![Issues](https://img.shields.io/github/issues/USERNAME/REPO.svg?style=for-the-badge)](https://github.com/USERNAME/REPO/issues)
[![Licença](https://img.shields.io/github/license/USERNAME/REPO.svg?style=for-the-badge)](https://github.com/USERNAME/REPO/blob/main/LICENSE)

Repositório com exercícios, listas e pequenos projetos das disciplinas (C, Java, SQL, Octave, Redes, etc.).

## 📋 Sumário

- [Sobre o Repositório](#sobre-o-repositório)
- [Disciplinas / Tecnologias](#disciplinas--tecnologias)
- [Estrutura de Pastas](#estrutura-de-pastas)
- [Começando](#começando)
- [Uso](#uso)
- [Roteiro](#roteiro)
- [Contribuição](#contribuição)
- [Licença](#licença)
- [Contato](#contato)
- [Agradecimentos](#agradecimentos)
- [Nota de Integridade Acadêmica](#nota-de-integridade-acadêmica)

## 🧠 Sobre o Repositório

Este repositório centraliza **exercícios e exemplos** resolvidos ao longo do curso de Engenharia de Software / Computação. Cada pasta corresponde a uma disciplina ou tema (ex.: C, Java, SQL, Estruturas de Dados, Redes, etc.).  
A ideia é manter o histórico de aprendizado, com **código limpo**, **tests quando aplicável** e **anotações curtas**.

### Disciplinas / Tecnologias

- **C / C99** – Ponteiros, alocação dinâmica, structs, arquivos
- **Java (17+)** – OOP, coleções, exceções, streams
- **SQL** – DDL/DML/DQL, modelagem, chaves e relacionamentos
- **Octave/Matlab** – Sinais, controle, processamento de imagens (básico)
- **Redes de Computadores** – Conceitos, sockets (quando aplicável)
- **Python / Node.js (opcional)** – Scripts auxiliares, automações, testes

### Estrutura de Pastas

```
.
├── c/
│   ├── listas/
│   │   ├── lista01/
│   │   └── lista02/
│   └── projetos/
├── java/
│   ├── oop-basics/
│   └── collections-streams/
├── sql/
│   ├── scripts/
│   └── exemplos/
├── octave/
│   └── praticas/
├── docs/
│   ├── images/
│   └── notas.md
└── README.md
```

## 🚀 Começando

### Pré-requisitos

Dependendo da pasta/linguagem que você vai rodar:

- **Git** 2.40+
- **GCC/Clang** (para C) e **Make** (opcional)
- **Java 17+** (JDK) + `javac` e `java`
- **Node.js 18+** (para scripts/geradores quando existirem)
- **Python 3.11+** (opcional)
- **Octave** (ou Matlab) para as práticas de Octave
- **Docker** (opcional) para serviços como banco de dados

### Instalação

1. Clone o repositório:

```bash
git clone https://github.com/USERNAME/REPO.git
cd REPO
```

2. (Opcional) Configure variáveis de ambiente para exemplos que precisem de banco/serviços.

3. Navegue até a pasta do exercício/linguagem desejada.

## 💻 Uso

Alguns exemplos de execução (ajuste de acordo com cada pasta):

**C (GCC):**

```bash
cd c/listas/lista01
gcc -Wall -Wextra -O2 exercicio01.c -o exercicio01
./exercicio01
```

**Java:**

```bash
cd java/oop-basics
javac src/*.java -d out
java -cp out Main
```

**SQL (MySQL/MariaDB exemplo):**

```bash
cd sql/scripts
# importe o arquivo para o seu SGBD favorito
# ex.: mysql -u root -p < script.sql
```

**Octave:**

```bash
cd octave/praticas
octave --quiet main.m
```

Em cada subpasta, procure por um README.md local com instruções específicas (quando houver).

## 📅 Roteiro

- [ ] Organizar estrutura inicial
- [ ] Adicionar exemplos básicos em C (ponteiros, malloc/free)
- [ ] Adicionar exercícios Java (OOP, coleções)
- [ ] Scripts SQL com DDL/DML e exemplos de consultas
- [ ] Práticas Octave com sinais/controle
- [ ] Testes automatizados (quando aplicável)
- [ ] Documentação curta por pasta

Veja as issues abertas para acompanhar o progresso e sugerir melhorias:  
https://github.com/USERNAME/REPO/issues

## 🤝 Contribuição

Contribuições são bem-vindas!

1. Faça um fork do projeto
2. Crie uma branch (`git checkout -b feat/minha-feature`)
3. Commit das mudanças (`git commit -m 'feat: adiciona exercício X em C'`)
4. Push da branch (`git push origin feat/minha-feature`)
5. Abra um Pull Request

**Diretrizes resumidas:**

- Padrões de commit: `feat:`, `fix:`, `docs:`, `test:`, `chore:`, `refactor:`
- Atualize a documentação se alterar comportamento/estrutura
- Inclua testes quando fizer sentido (ex.: Java/JUnit)

## 📄 Licença

Distribuído sob a licença MIT. Consulte o arquivo `LICENSE` para mais informações.

## 📞 Contato

Artur Braga (Braga) — arturhenriquefc@gmail.com — [LinkedIn](https://www.linkedin.com/in/artur-braga-103860323)

## 🙏 Agradecimentos

- [Markdown Guide](https://www.markdownguide.org)
- [Shields.io](https://shields.io)
- [Choose a License](https://choosealicense.com)
- Professores e colegas pela troca de conhecimento

## ⚠️ Nota de Integridade Acadêmica

Este repositório é para estudo e prática. Não use o código aqui para violar políticas de avaliação.  
Aprenda, adapte e cite fontes quando necessário.

---

<p align="center"><a href="#readme-top">⬆ Voltar ao topo</a></p>
