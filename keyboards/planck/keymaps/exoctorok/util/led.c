//  ===================================================
//      AUTHOR:      EXOCTOROK
//      DATE:        20181021
//      DESCRIPTION: LED MATRIX FUNCTIONS ALLOWING
//                   COLOR CHANGES ON MOD KEY HOLDS
//  ===================================================

void rgb_matrix_indicators_user(void) {
  int outer[] = {0, 11, 12, 23, 24, 35, 36, 37, 38, 39, 40, 44, 45, 46, 47, 48};
/*
  int defcolors[] = {0, 6, 30};
  int ctrl[] = {37, 47};
  int ctrlcolor[] = {30, 12, 0};
  int alt[] = {38, 46};
  int altcolor[] = {0, 21, 9};
  int gui[] = {39, 45};
  int guicolor[] = {9, 21, 0};
  int sft = 40;
  int sftcolor[] = {15, 0, 0};
  int l2 = 44;
  int l2color[] = {0, 18, 3};
  int l3 = 12;
  int l3color[] = {0, 15, 15};
*/

  void default_rgb(void) {
    int a;
    for (a = 0; a < 49; a = a+1) {
      if (rgb_toggle == 0) {
        rgb_matrix_set_color(a, 0, 6, 30);
      } else {
        rgb_matrix_set_color(a, 0, 0, 0);
      }
    }
    foreach(int *v, outer) {
      if (rgb_toggle == 0) {
        rgb_matrix_set_color(*v, 15, 0, 0);
      } else {
        rgb_matrix_set_color(*v, 0, 0, 0);
      }
    }
  }

  void l2_rgb(void) {
    int a;
    for (a = 0; a < 49; a = a+1) {
      if (rgb_toggle == 0) {
        rgb_matrix_set_color(a, 0, 18, 3);
      } else {
        rgb_matrix_set_color(a, 0, 0, 0);
      }
    }
    if (rgb_toggle == 0) {
      rgb_matrix_set_color(44, 12, 0, 0);
    } else {
      rgb_matrix_set_color(a, 0, 0, 0);
    }
  }

  void l3_rgb(void) {
    int a;
    for (a = 0; a < 49; a = a+1) {
      if (rgb_toggle == 0) {
        rgb_matrix_set_color(a, 0, 15, 15);
      } else {
        rgb_matrix_set_color(a, 0, 0, 0);
      }
    }
    if (rgb_toggle == 0) {
      rgb_matrix_set_color(12, 4, 0, 0);
    } else {
      rgb_matrix_set_color(a, 0, 0, 0);
    }
  }

  void l5_rgb(void) {
    int a;
    for (a = 0; a < 49; a = a+1) {
      rgb_matrix_set_color(a, 0, 0, 30);
    }
    rgb_matrix_set_color(2, 30, 0, 0);
    rgb_matrix_set_color(13, 30, 0, 0);
    rgb_matrix_set_color(14, 30, 0, 0);
    rgb_matrix_set_color(15, 30, 0, 0);
  }

  void sft_rgb(void) {
    int a;
    for (a = 0; a < 49; a = a+1) {
      if (rgb_toggle == 0) {
        rgb_matrix_set_color(a, 15, 0, 0);
      } else {
        rgb_matrix_set_color(a, 0, 0, 0);
      }
    }
    foreach(int *v, outer) {
      if (rgb_toggle == 0) {
        rgb_matrix_set_color(*v, 0, 6, 30);
      } else {
        rgb_matrix_set_color(a, 0, 0, 0);
      }
    }
  }

  void gui_rgb(void) {
    int a;
    for (a = 0; a < 49; a = a+1) {
      if (rgb_toggle == 0) {
        rgb_matrix_set_color(a, 9, 21, 0);
      } else {
        rgb_matrix_set_color(a, 0, 0, 0);
      }
    }
  }

  void ctl_rgb(void) {
    int a;
    for (a = 0; a < 49; a = a+1) {
      if (rgb_toggle == 0) {
        rgb_matrix_set_color(a, 30, 12, 0);
      } else {
        rgb_matrix_set_color(a, 0, 0, 0);
      }
    }
  }

  void alt_rgb(void) {
    int a;
    for (a = 0; a < 49; a = a+1) {
      if (rgb_toggle == 0) {
        rgb_matrix_set_color(a, 0, 21, 9);
      } else {
        rgb_matrix_set_color(a, 0, 0, 0);
      }
    }
  }
  

  default_rgb();

  if IS_LAYER_ON(L2) {
    l2_rgb();
  } else if IS_LAYER_ON(L3) {
    l3_rgb();
  } else if IS_LAYER_ON(L5) {
    l5_rgb(); 
  } else if (sft_on) {
    sft_rgb();
  } else if (gui_on) {
    gui_rgb();
  } else if (ctl_on) {
    ctl_rgb();
  } else if (alt_on) {
    alt_rgb();
  } else {
    default_rgb();
  }

  if (rgb_toggle != 2) {
    int space[] = {41, 42, 43};
    if (loc < 41)  {
      rgb_matrix_set_color(loc, 200, 200, 200);
    }
  
    if (loc == 41) {
      foreach(int *v, space) {
        rgb_matrix_set_color(*v, 200, 200, 200);
      }
    }
  
    if ((loc > 41) && (loc != 255)) {
      rgb_matrix_set_color(loc, 200, 200, 200);
    }
  
    if (loc == 255) {
      return;
    }
  }
}
