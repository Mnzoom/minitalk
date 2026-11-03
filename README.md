# 📡 Minitalk - 42 School

Minitalk est un projet de l'école 42 qui consiste à créer un programme de communication inter-processus (IPC) sous forme de mini-chat client-serveur, utilisant exclusivement les signaux UNIX `SIGUSR1` et `SIGUSR2`.

---

## 🚀 Fonctionnalités
- **Communication par signaux** : Envoi de chaînes de caractères bit par bit du client vers le serveur à l'aide de `kill()`.
- **Gestion des signaux UNIX** : Utilisation de `sigaction` pour le serveur et de `signal` pour le client[cite: 2] afin de décoder et reconstituer les messages.
- **Accusé de réception (Feedback)** : Le serveur confirme la bonne réception des messages au client via des signaux de retour.
- **Intégration de la Libft** : Utilisation d'une bibliothèque personnalisée pour la gestion des affichages et conversions.

---

## 🛠️ Compilation & Utilisation

### 1. Compiler les programmes
Le Makefile gère la compilation automatique du serveur, du client et de la libft intégrée :
bash
make

### 2.  Lancer le serveur
Exécute d'abord le serveur dans un terminal. Il affichera son propre PID :
./server

### 3. Lancer le client
Dans un autre terminal, lance le client en lui passant en arguments le PID du serveur ainsi que le message à envoyer :
./client <PID_DU_SERVEUR> "Votre message ici"

💻 Architecture du Code
server.c : Initialise le serveur, récupère son PID et écoute les signaux entrants (SIGUSR1 et SIGUSR2) via sigaction. Il reconstruit chaque octet bit par bit pour afficher le message final[cite: 1].   
JS
client.c : Convertit le message textuel en flux de bits et envoie les signaux un par un au serveur en utilisant une temporisation (usleep) pour éviter la perte de paquets[cite: 2].
Makefile : Automatise la compilation des binaires server et client avec les flags de norme (-Wall -Wextra -Werror).

📐 Stack Technique
Langage : C
Norme : Norme 42
Fonctions autorisées : write, signal, sigemptyset, sigaddset, sigaction, kill, getpid, malloc, free, pause, sleep, usleep, exit




