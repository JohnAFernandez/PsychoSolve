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
const char NOT_A_BLOCK = 0;
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
  
  // rows and columns
  char row_count;
  char col_count;
  int grid_size;
  char type[MAX_GRID_SIZE]; // stores info with do rows and then columns
  
  // secondary level info structure
  grid_group not_block_list;
  grid_group goals;
  grid_group edges;
  grid_group movas;
  grid_group simedges;
  grid_group holes;
  grid_group uplefts;
  grid_group uprights;
  grid_group dnrights;
  grid_group dnlefts;
  
  //start and end
  location start;  
    
} level_info;


// the path array
struct possible_path { 
  char movement[MAX_CHOICES];
} possible_path;

// mini path array for optimizing small sections
struct decision_point {
  char movement[MAX_CHOICES];
} decision_point;

struct location {
  char x;
  char y;
} location;

struct grid_group {
 int count;
 location xy[MAX_GRID_SIZE];
}

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

  memset(level.row_count, 0, MAX_GRID_SIZE);
  
  // file reading and stuffing loop should go here.....
  //blarg, making sure that col_count and row_count are set
  // has to be passed to the program because it can be rectangular
  
  level.grid_size = level.col_count * level.row_count;
  level.not_block_list.count = 0
  level.goals.count = 0;
  level.edges.count = 0;
  level.movas.count = 0;
  level.simedges.count = 0;
  level.holes.count = 0;
  level.uplefts.count = 0;
  level.uprights.count = 0;
  level.dnrights.count = 0;
  level.dnlefts.count = 0;  
    
  // now just placing it in our level info struct
  int k = 0;
  for(int i = 0; i < level.col_count; i++) {
    for(int j = 0; j < level.row_count; j++) {
      level.type[k] = //pull type from       
      k++;
      switch(level.type[k]){
        case 1:
          level.start = 
        case 2:
          level.goals.xy[level.goals.count].x = i;
          level.goals.xy[level.goals.count].y = j;
          level.goals.count++;
        case 3:  
          level.edges.xy[levels.edges.count].x = i;
          level.edges.xy[levels.edges.count].y = j;
          level.edges.count++;
        case 4: 
          level.movas.xy[levels.movas.count].x = i;
          level.movas.xy[levels.movas.count].y = j;
          level.movas.count++;
        case 5:
          level.simedges.xy[levels.simedges.count].x = i;
          level.simedges.xy[levels.simedges.count].y = j;
          level.simedges.count++;
        case 6:
          level.holes.xy[levels.holes.count].x = i;
          level.holes.xy[levels.holes.count].y = j;
          level.holes.count++;
        case 7:
          level.uplefts.xy[levels.uplefts.count].x = i;
          level.uplefts.xy[levels.uplefts.count].y = j;
          level.uplefts.count++;
        case 8:
          level.uprights.xy[levels.uprights.count].x = i;
          level.uprights.xy[levels.uprights.count].y = j;
          level.uprights.count++;
        case 9:
          level.dnrights.xy[levels.dnrights.count].x = i;
          level.dnrights.xy[levels.dnrights.count].y = j;
          level.dnrights.count++;
        case 10:
          level.dnlefts.xy[levels.dnlefts.count].x = i;
          level.dnlefts.xy[levels.dnlefts.count].y = k;
          level.dnlefts.count++;
          
        case 0:
        
        default:
          break;
      }        
    }
  }
  
  for (; k < MAX_GRID_SIZE; k++) {
     level.type[k] = 0;
  }
  
}



void search_level(bool find_all, char type){
  for(int i = 0; i < level.col_count; i++) {
    for(int j = 0; j < level.row_count; j++) {
      level.type[k] = //pull type from       
      k++;
 
 
  
}




