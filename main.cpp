#include <iostream>

// grid size limits
const char MAX_ROWS = 255;
const char MAX_COLS = 255;
const int MAX_GRID_SIZE = MAX_ROWS * MAX_COLS;

// movement numbers and basic info
const char UP = 1;
const char DOWN = 2;
const char LEFT = 3;
const char RIGHT = 4;
const char STUCK = 5;
const int MAX_CHOICES = MAX_GRID_SIZE * 100

// block types, psychopath 1
const char START = 1;
const char GOAL = 2;
const char EDGE = 3;
const char MOVA = 4;
const char SIMEDGE = 5;

// block types, psychopath 2, will I even get here?
const char HOLE = 6;
const char UPLEFT = 7;
const char UPRIGHT = 8;
const char DNRIGHT = 9;
const char DNLEFT = 10;


// main struct to keep track of all the level info
struct level_info {
  
  //rows and columns
  char row_count;
  char col_count;
  location_info grid[MAX_GRID_SIZE];
   
  //start and end
  location start;
  location end;
    
} level_info;


// the path array
struct possible_path { 
  char movement[MAX_CHOICES];
} possible_path;

// mini path array for optimizing small sections
struct decision_point {
  char movement[MAX_CHOICES];
} decision_point;

struct location_info {
  location coord;
  char type;
} location_info

struct location {
  char x;
  char y;
} location;

// Header Functions

void process_incoming(level_info* level);

void find_start_and_end();

 void search_level(char type);

// PROGRAM START

int main() {
  level_info level;
  process_incoming(level);
  
  return 0;
}

void process_incoming(level_info* level){

  char whole_level[MAX_GRID_SIZE];
  memset(whole_level, 0, MAX_GRID_SIZE);
  memset(level->rows.block_type, 0, MAX_COLS); //not sure if I initialized the multidimensional arrays correctly
  memset(level->cols.block_type, 0, MAX_ROWS);
  
  // file reading and stuffing loop should go here.....
  //blarg, making sure that
  
  // now just placing it in our working structs
  int k = 0;
  for(int i = 0; i<level->col_count; i++) {
    for(int j = 0; j<row_count; j++) {
      level_info->rows[j].block_type[i] = whole_level[k];
      level_info->cols[i].block_type[j] = whole_level[k];
      k++;
    }
  }
}

void search_level(){
 for(int i = 0);
 int j = 0;
 
 
  
}




