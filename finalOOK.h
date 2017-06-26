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


#ifndef INCLUDED_OOK_FINALOOK_H
#define INCLUDED_OOK_FINALOOK_H

#include <OOK/api.h>
#include <gnuradio/sync_interpolator.h>

namespace gr {
  namespace OOK {

    /*!
     * \brief <+description of block+>
     * \ingroup OOK
     *
     */
    class OOK_API finalOOK : virtual public gr::sync_interpolator
    {
     public:
      typedef boost::shared_ptr<finalOOK> sptr;

      /*!
       * \brief Return a shared_ptr to a new instance of OOK::finalOOK.
       *
       * To avoid accidental use of raw pointers, OOK::finalOOK's
       * constructor is in a private implementation
       * class. OOK::finalOOK::make is the public interface for
       * creating new instances.
       */
      static sptr make(float interpolation);

      virtual void d_interpolation(float interpolation) = 0;
      virtual float interpolation() = 0;
    };

  } // namespace OOK
} // namespace gr

#endif /* INCLUDED_OOK_FINALOOK_H */

