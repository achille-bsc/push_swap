# 🌀 Push_Swap

## 📌 Description
**Push_Swap** est un projet algorithmique de l'école 42 dont l'objectif est de trier une pile de nombres entiers en utilisant un ensemble limité d'opérations sur deux piles (**A** et **B**). L'objectif est de produire l'algorithme le plus efficace possible en termes de nombre de mouvements.

✅ Algorithme utilisé : **Radix Sort avec optimisations**

## 🎮 Règles du Jeu
- Deux piles : **A** (initialement remplie) et **B** (vide au départ).
- Vous devez trier **A** en ordre croissant en utilisant uniquement les opérations définies ci-dessous.
- Le programme doit afficher la séquence d'opérations utilisées pour arriver à la solution.

## 🔄 Opérations Disponibles

| 🏷️ Commande | 📜 Description |
|------------|--------------|
| `sa` | 🔄 Échange les deux premiers éléments de **A** |
| `sb` | 🔄 Échange les deux premiers éléments de **B** |
| `ss` | 🔄 Effectue `sa` et `sb` simultanément |
| `pa` | 📤 Pousse le premier élément de **B** sur **A** (sauf si l'algorithme prévoit un `pb` au décalage de bytes suivant) |
| `pb` | 📥 Pousse le premier élément de **A** sur **B** |
| `ra` | 🔃 Rotation ascendante de **A** (1er devient dernier) |
| `rb` | 🔃 Rotation ascendante de **B** |
| `rr` | 🔃 Effectue `ra` et `rb` simultanément |
| `rra` | 🔄 Rotation descendante de **A** (dernier devient premier) |
| `rrb` | 🔄 Rotation descendante de **B** |
| `rrr` | 🔄 Effectue `rra` et `rrb` simultanément |

## ⚙️ Installation et Compilation

### 📦 Prérequis
- Un environnement **Linux**
- Un compilateur `cc`
- `make`

### 🏗️ Compilation
```sh
make
```
Cela génère l'exécutable `push_swap`.

## 🚀 Utilisation

### 🎯 Exécuter le programme
```sh
./push_swap <liste de nombres>
```
📌 Exemple :
```sh
./push_swap 4 67 3 87 23
```
Cela affichera une séquence d'opérations permettant de trier la liste donnée.

### 🔍 Tester avec un Checker (bonus)
Le projet peut être testé avec un **checker** qui vérifie si la liste est triée correctement après l'application des opérations.

```sh
ARG=4 67 3 87 23; ./push_swap $ARG | ./checker $ARG
```

## 🏆 Stratégies et Optimisation

| 🏗️ Taille de la liste | ⚡ Stratégie |
|------------------|-------------|
| **2 à 5 éléments** | 🔹 Codage en dur des permutations optimales |
| **Grandes listes** | 🔹 **Algorithme Radix optimisé** pour minimiser les mouvements |
| **Optimisation** | 🔹 Minimisation des opérations via rotations stratégiques et regroupement |

## 📚 Ressources Utiles
- 📄 [Sujet officiel du projet](https://cdn.intra.42.fr/pdf/pdf/142800/fr.subject.pdf)
- 📘 [Explication mathématique et algorithmique détaillée de l'algorithme Radix Sort (En anglais)](https://en.wikipedia.org/wiki/Radix_sort)

## ✍️ Auteur
Projet réalisé dans le cadre de l'école 42 par **Achille BOSC**, en collaboration avec **Amélie DUBOIS**.

---

📢 *Cet article a été rédigé par une intelligence artificielle. Le code lui, n'a d'aucune sorte été généré ou modifié par l'IA. 100% du code lié a ce Repertoire GitHub a été fais par les autheurs mentionnés.*

🔗 [ChatGPT](https://chat.openai.com/)
