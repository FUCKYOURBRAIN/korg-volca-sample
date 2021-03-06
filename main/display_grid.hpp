#ifndef DISPLAY_GRID_HPP
#define DISPLAY_GRID_HPP

#include "Arduino.h"

#include "mediator.hpp"
#include "definitions.hpp"

class DisplayGrid: public Component {
public:
  DisplayGrid(Mediator *m);

  void changed(uint8_t *event, uint8_t size);
  void draw_play_mode();
  void draw_mapper_pad_selection(int8_t *pad_to_voice_map);
  void draw_mapper_voice_selection(uint8_t pad_index, uint8_t voice_index);
private:
  Mediator *mediator;
};

#endif