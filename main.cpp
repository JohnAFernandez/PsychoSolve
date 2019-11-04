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
const char REGU = 1
const char START = 2;
const char GOAL = 3;
const char EDGE = 4;
const char MOVA = 5;
const char SIMEDGE = 6;

// block types, psychopath 2, will I even get here?
const char HOLE = 7;
const char UPLEFT = 8;
const char UPRIGHT = 9;
const char DNRIGHT = 10;
const char DNLEFT = 11;

const 


// main struct to keep track of all the level info
struct level_info {
  
  // rows and columns
  char row_count;
  char col_count;
  int grid_size;
  char type[MAX_GRID_SIZE]; // stores info with do rows and then columns
  
  // secondary level info structure
  grid_group not_block_list;
  grid_group regulars;
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

// locations
struct location {
  char x;
  char y;
} location;

// list locations by type
struct grid_group {
 int count;
 location xy[MAX_GRID_SIZE];
} grid_group;

struct decision_matrix {
  char block[9];
} decision_block;

// Header Functions

void process_incoming(level_info* level);

void create_simedges(level_info* level);

// PROGRAM START

int main() {
  level_info level;
  
  process_incoming(level);
  
  create_simedges_whole(level);
  
  
  return 0;
}

void process_incoming(level_info* level){
  
  memset(level->type, 0, MAX_GRID_SIZE);
  level->row_count = 0;
  level->col_count = 0;
    
  // file reading and stuffing loop should go here.....
  //blarg, making sure that col_count and row_count are set
  // has to be passed to the program because it can be rectangular
  
  if (level->row_count < 3 || level->col_count < 3) {
    int3();
  }
  
  level->grid_size = level->col_count * level->row_count;
  level->not_block_list.count = 0;
  level->goals.count = 0;
  level->edges.count = 0;
  level->movas.count = 0;
  level->simedges.count = 0;
  level->holes.count = 0;
  level->uplefts.count = 0;
  level->uprights.count = 0;
  level->dnrights.count = 0;
  level->dnlefts.count = 0;  
    
  // now just placing it in our level info struct
  int k = 0;
  for(int i = 0; i < level->col_count; i++) {
    for(int j = 0; j < level->row_count; j++) {
      level->type[k] = //pull type from       
      k++;
      switch(level->type[k]){
          // there is only one start
        case 1:
          level->regulars.xy[level->goals.count].x = i;
          level->regulars.xy[level->goals.count].y = j;
          level->regulars.count++;
          break;
        case 2:
          level->start.xy.x = i;
          level->start.xy.y = j;
          break;
        case 3:
          level->goals.xy[level->goals.count].x = i;
          level->goals.xy[level->goals.count].y = j;
          level->goals.count++;
          break;
        case 4:  
          level->edges.xy[levels->edges.count].x = i;
          level->edges.xy[levels->edges.count].y = j;
          level->edges.count++;
          break;
        case 5: 
          level->movas.xy[levels->movas.count].x = i;
          level->movas.xy[levels->movas.count].y = j;
          level->movas.count++;
          break;
        // case 6 is simulated edges, which come later
        case 6:
          break;
        case 7:
          level->holes.xy[levels->holes.count].x = i;
          level->holes.xy[levels->holes.count].y = j;
          level->holes.count++;
          break;
        case 8:
          level->uplefts.xy[levels->uplefts.count].x = i;
          level->uplefts.xy[levels->uplefts.count].y = j;
          level->uplefts.count++;
          break;
        case 9:
          level->uprights.xy[levels->uprights.count].x = i;
          level->uprights.xy[levels->uprights.count].y = j;
          level->uprights.count++;
          break;
        case 10:
          level->dnrights.xy[levels->dnrights.count].x = i;
          level->dnrights.xy[levels->dnrights.count].y = j;
          level->dnrights.count++;
          break;
        case 11:
          level->dnlefts.xy[levels->dnlefts.count].x = i;
          level->dnlefts.xy[levels->dnlefts.count].y = k;
          level->dnlefts.count++;
          break;
        case 0:        
        default:
          break;
      }        
    }
  }
}

void create_simedges_whole(level){
  decision_matrix chunk;
  int a_start = 0;
  int b_start = MAX_ROWS;
  int c_start = 2*MAX_ROWS;
  
  chunk.block[0] = level->type[a_start];
  chunk.block[1] = level->type[a_start+1];
  chunk.block[2] = level->type[a_start+2];
  chunk.block[3] = level->type[b_start];  
  chunk.block[4] = level->type[b_start+1];
  chunk.block[5] = level->type[b_start+2];
  chunk.block[6] = level->type[c_start];  
  chunk.block[7] = level->type[c_start+1];
  chunk.block[8] = level->type[c_start+2];
  
  
  
  
}

