#include <iostream>

const char MAX_ROWS = 100;
const char MAX_COLS = 100;
const int MAX_GRID_SIZE = MAX_ROWS * MAX_COLS;
const char UP =| 1<<0;
const char DOWN =| 1<<1;
const char LEFT =| 1<<2;
const char RIGHT =| 1<<3;
const int MAX_CHOICES = MAX_GRID_SIZE * 100

// main struct to keep track of all the level info
struct level_info {
  char row_count;
  char col_count;
  row_struct rows[MAX_ROWS];
  col_struct cols[MAX_COLS];
} level_info;

// helper structs for rows and columns, so we can store the block types
struct row_struct {  
  char block_type[MAX_COLS];
} row_struct;

struct col_struct {
  char block_type[MAX_ROWS];
} col_struct;

// the path array
struct possible_path { 
  char movement[MAX_CHOICES];
} possible_path;

// mini path array for optimizing small sections
struct decision_point
  char movement[MAX_GRID SIZE];

void process_incoming();

int main() {
  level_info *level = nullptr;
  process_incoming();

  
  find_start();
  
  return 0;
}

void process_incoming(){

  
  char whole_level[
  
  
  // file reading and stuffing loop should go here.....
  

}
