#include <TFT_eSPI.h>
#include "Icons.h"

extern TFT_eSPI tft;
extern bool isRaceDay;
extern bool showWDC;

void refreshDisplay() {
  tft.fillScreen(TFT_BLACK);
  drawStaticGrid();

  if (isRaceDay) {
    for(int i = 0; i < 9; i++) {
        updateDriverBox(i, getDriverIcon(liveData[i]));
    }
  } else {
    if (showWDC) {
        for(int i = 0; i < 9; i++) {
            updateDriverBox(i, getDriverIcon(liveData[i])); 
        }
    } else {
        for(int i = 0; i < 9; i++) {
            updateDriverBox(i, getTeamIcon(teamData[i]));
        }
    }
  }
}

void drawStaticGrid(){
  //ver
  tft.drawFastVLine(80, 0, 135, TFT_WHITE);
  tft.drawFastVLine(160, 0, 135, TFT_WHITE);
  
  //hor
  tft.drawFastHLine(0, 45, 240, TFT_WHITE);
  tft.drawFastHLine(0, 90, 240, TFT_WHITE);
}

void updateDriverBox(int pos, const uint16_t* icon) {
  int col = pos % 3;
  int row = pos / 3;
  tft.pushImage(col * 80, row * 45, 80, 45, icon);
}

void clearDriverBox(int pos) {
  int col = pos % 3;
  int row = pos / 3;
  tft.fillRect(col * 80, row * 45, 80, 45, TFT_BLACK);
}

const uint16_t* getDriverIcon(int driverNumber) {
  switch(driverNumber) {
    case 3: return mv;
    case 4: return ln;
    case 5: return gb;
    case 6: return ih;
    case 10: return pg;
    case 11: return sp;
    case 12: return ka;
    case 14: return fa;
    case 16: return cl;
    case 18: return lh;
    case 23: return aa;
    case 27: return nh;
    case 30: return ll;
    case 31: return eo;
    case 41: return al;
    case 43: return fc;
    case 44: return lw;
    case 55: return cs;
    case 63: return gr;
    case 77: return vb;
    case 81: return op;
    case 87: return ob;
    default: return emptyIcon;
  }

  const uint16_t* getTeamIcon(int team) {
  switch(driverNumber) {
    case 1: return rbr;
    case 2: return fer;
    case 3: return mcl;
    case 4: return mer;
    case 5: return ast;
    case 6: return wil;
    case 7: return rbv;
    case 8: return haa;
    case 9: return aud;
    case 10: return alp;
    case 11: return cad;
    default: return emptyIcon;
  }
}