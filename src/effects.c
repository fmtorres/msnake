#include "effects.h"
#include "fruits.h"

/* Here you can find some diffrent effect diffrent fruits may have if you eat them */

// ---- normal ----
// char: 'x'
// grow by 1
// increase highscore by 1
// grow 1 new fruit
void normal_effect(GAME *game) {
  grow_fruit(game);
  game->snake.grow++;
  game->highscore++;
}

// ---- double grow ----
// char: '@
// grow by 1
// increase highscore by 1
// grow 2 new fruit
void double_grow(GAME *game) {
  normal_effect(game);
  grow_fruit(game);
}

// ---- mega food ----
// char: '%'
// grow by 5
// increase highscore by 10
// grow 1 new fruit
void mega_food(GAME *game) {
  normal_effect(game);
  game->snake.grow += 4;
  game->highscore += 9;
}
