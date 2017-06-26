/* -*- c++ -*- */
/* 
 * Copyright 2017 <+YOU OR YOUR COMPANY+>.
 * 
 * This is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 3, or (at your option)
 * any later version.
 * 
 * This software is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with this software; see the file COPYING.  If not, write to
 * the Free Software Foundation, Inc., 51 Franklin Street,
 * Boston, MA 02110-1301, USA.
 */

#ifndef INCLUDED_OOK_FINALOOK_IMPL_H
#define INCLUDED_OOK_FINALOOK_IMPL_H

#include <OOK/finalOOK.h>

namespace gr {
  namespace OOK {

    class finalOOK_impl : public finalOOK
    {
     private:
      float final_interpolation;
      //gr_complex d_offset;


     public:
      finalOOK_impl(float interpolation); //, //gr_complex offset = 0;
      ~finalOOK_impl();
   
      void d_interpolation(float interpolation) { final_interpolation = interpolation; }
      float interpolation() { return final_interpolation; }
      //gr_complex offset () const { return d_offset; } 

      // Where all the action really happens
      int work(int noutput_items,
         gr_vector_const_void_star &input_items,
         gr_vector_void_star &output_items);
    };

  } // namespace OOK
} // namespace gr

#endif /* INCLUDED_OOK_FINALOOK_IMPL_H */

