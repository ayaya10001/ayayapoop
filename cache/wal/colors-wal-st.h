const char *colorname[] = {

  /* 8 normal colors */
  [0] = "#12121e", /* black   */
  [1] = "#B65F48", /* red     */
  [2] = "#9C6368", /* green   */
  [3] = "#B68A72", /* yellow  */
  [4] = "#D78F75", /* blue    */
  [5] = "#695B8A", /* magenta */
  [6] = "#986984", /* cyan    */
  [7] = "#e9cabf", /* white   */

  /* 8 bright colors */
  [8]  = "#a38d85",  /* black   */
  [9]  = "#B65F48",  /* red     */
  [10] = "#9C6368", /* green   */
  [11] = "#B68A72", /* yellow  */
  [12] = "#D78F75", /* blue    */
  [13] = "#695B8A", /* magenta */
  [14] = "#986984", /* cyan    */
  [15] = "#e9cabf", /* white   */

  /* special colors */
  [256] = "#12121e", /* background */
  [257] = "#e9cabf", /* foreground */
  [258] = "#e9cabf",     /* cursor */
};

/* Default colors (colorname index)
 * foreground, background, cursor */
 unsigned int defaultbg = 0;
 unsigned int defaultfg = 257;
 unsigned int defaultcs = 258;
 unsigned int defaultrcs= 258;
