interface MySelf {
  nickname: string;
  favoriteAnime: string[];
  funfact: string;
}

const myself: MySelf = {
  nickname: "fdhliakbar",
  favoriteAnime: [
    "One Piece",
    "Code Geass",
    "Steins Gate",
    "Monogatari Series",
    "Clannad: After Story",
  ],
  funfact: "Otaku 🐱",
};

console.log(myself.favoriteAnime);
