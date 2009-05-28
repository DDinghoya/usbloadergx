#ifndef _GUIGAMECAROUSEL_H_
#define _GUIGAMECAROUSEL_H_

#include "gui.h"
#include "../disc.h"

class GuiGameCarousel : public GuiElement
{
	public:
		GuiGameCarousel(int w, int h, struct discHdr * l, int gameCnt, const char *themePath, const u8 *imagebg, int selected = 0, int offset = 0);
		~GuiGameCarousel();
		int FindMenuItem(int c, int d);
		int GetClickedOption();
		int GetSelectedOption();
		void ResetState();
		void SetFocus(int f);
		void Draw();
		void Update(GuiTrigger * t);
		int GetOffset();
		void Reload(struct discHdr * l, int count);
		//GuiText * optionVal[PAGESIZE];
	protected:
		int selectedItem;
		int listOffset;
		int scrollbaron;
		int pagesize;
		int changed;
		int firstPic;
		int speed;

		struct discHdr * gameList;
		int gameCnt;

		int * gameIndex;
		int * bob;

		GuiButton ** game;
		GuiText ** gameTxt;

		GuiImage ** coverImg;
		GuiImageData ** cover;

		GuiButton * btnRight;
		GuiButton * btnLeft;

		GuiImage * btnLeftImg;
		GuiImage * btnRightImg;

		GuiImageData * imgLeft;
		GuiImageData * imgRight;

		GuiSound * btnSoundOver;
		GuiSound * btnSoundClick;
		GuiTrigger * trigA;
		GuiTrigger * trigL;
		GuiTrigger * trigR;
		GuiTrigger * trigPlus;
		GuiTrigger * trigMinus;
		GuiTrigger * trigHeldA;
};
#endif