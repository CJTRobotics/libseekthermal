/***************************************************************************
 *   Copyright (C) 2013 by Ralf Kaestner                                   *
 *   ralf.kaestner@gmail.com                                               *
 *                                                                         *
 *   This program is free software; you can redistribute it and/or modify  *
 *   it under the terms of the GNU General Public License as published by  *
 *   the Free Software Foundation; either version 2 of the License, or     *
 *   (at your option) any later version.                                   *
 *                                                                         *
 *   This program is distributed in the hope that it will be useful,       *
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of        *
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the         *
 *   GNU General Public License for more details.                          *
 *                                                                         *
 *   You should have received a copy of the GNU General Public License     *
 *   along with this program; if not, write to the                         *
 *   Free Software Foundation, Inc.,                                       *
 *   59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.             *
 ***************************************************************************/

#ifndef SEEKTHERMAL_AAA_USB_CONFIG_RECEIVE_H
#define SEEKTHERMAL_AAA_USB_CONFIG_RECEIVE_H

/** \brief Seek XX-AAA Thermal camera config receive request (USB protocol)
  * 
  * This is the common base class of all config receive requests whose meaning
  * is currently undocumented.
  */

#include <seekthermal/usb/request.h>

namespace SeekThermal {
  namespace AAA {
    namespace Usb {
      class ConfigReceive :
        public SeekThermal::Usb::Request {
      public:
        /** \brief Construct a Seek XX-AAA Thermal camera config receive
          *   request
          */
        ConfigReceive(unsigned char request, unsigned short value,
          unsigned short index, size_t inputDataSize = 0);
        
        void write(std::ostream& stream) const;
      };
    };
  };
};

#endif
