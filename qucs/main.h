/***************************************************************************
                          main.h  -  description
                             -------------------
    begin                : Mon May 24  2004
    copyright            : (C) 2003 by Michael Margraf
    email                : michael.margraf@alumni.tu-berlin.de
 ***************************************************************************/

/***************************************************************************
 *                                                                         *
 *   This program is free software; you can redistribute it and/or modify  *
 *   it under the terms of the GNU General Public License as published by  *
 *   the Free Software Foundation; either version 2 of the License, or     *
 *   (at your option) any later version.                                   *
 *                                                                         *
 ***************************************************************************/

#ifndef MAIN_H
#define MAIN_H

#include "wire.h"
#include "node.h"
#include "diagrams/diagram.h"
#include "components/component.h"

#include <qfont.h>
#include <qcolor.h>
#include <qptrlist.h>

class QucsApp;


struct tQucsSettings {
  int x, y, dx, dy;    // position and size of main window
  QFont font, largeFont, smallFont;
  QColor BGColor;      // background color of view area

  unsigned int maxUndo;    // size of undo stack
  QString Editor;
};

extern tQucsSettings QucsSettings;  // extern because nearly everywhere used
extern QFont savingFont;       // to remember which font to save in "qucsrc"

bool saveApplSettings(QucsApp*);

QString complexRect (double, double, int Precision=3);
QString complexDeg  (double, double, int Precision=3);
QString complexRad  (double, double, int Precision=3);
QString StringNum(double num, char form='g', int Precision=3);

// just dummies for empty lists
extern QPtrList<Wire>      SymbolWires;
extern QPtrList<Node>      SymbolNodes;
extern QPtrList<Diagram>   SymbolDiags;
extern QPtrList<Component> SymbolComps;

#endif

