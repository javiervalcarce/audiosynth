// Hi Emacs, this is -*- coding: utf-8; mode: c++; tab-width: 6; indent-tabs-mode: nil; c-basic-offset: 6 -*-

#include "instrument.h"


////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
MonophonicInstrument::MonophonicInstrument(std::string name, int sample_block_size) {
      name_ = name;
      sample_block_size_ = sample_block_size;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
MonophonicInstrument::~MonophonicInstrument() {
      
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
int MonophonicInstrument::SampleBlockSize() const {
      return sample_block_size_;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
int MonophonicInstrument::PlayingNote() const {
      return playing_note_;
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
