#include "images.h"

#if (EXTERNAL_SSD1306 == 1)
uint8_t logo_RCR_50x50 [350] =
{
	0x00, 0x00, 0x0F, 0xFE, 0x00, 0x00, 0x00, //                     ###########
	0x00, 0x00, 0x7F, 0xFF, 0xE0, 0x00, 0x00, //                  ##################
	0x00, 0x03, 0xFF, 0xFF, 0xF8, 0x00, 0x00, //               #######################
	0x00, 0x0F, 0xFF, 0xFF, 0xFE, 0x00, 0x00, //             ###########################
	0x00, 0x1F, 0xFF, 0xFF, 0xFF, 0x80, 0x00, //            ##############################
	0x00, 0x7F, 0xFF, 0xFF, 0xFF, 0x80, 0x00, //          ################################
	0x00, 0xFF, 0xF0, 0x03, 0xFF, 0x80, 0x00, //         ############          ###########
	0x01, 0xFF, 0x80, 0x00, 0x7F, 0x80, 0x00, //        ##########                ########
	0x03, 0xFE, 0x00, 0x00, 0x0F, 0x80, 0x00, //       #########                     #####
	0x07, 0xF8, 0x01, 0xF0, 0x00, 0x00, 0x00, //      ########          #####
	0x07, 0xF0, 0x1F, 0xFE, 0x00, 0x00, 0x00, //      #######       ############
	0x0F, 0xE0, 0x1F, 0xFF, 0x00, 0x00, 0x00, //     #######        #############
	0x1F, 0xC0, 0x1F, 0xFF, 0x00, 0x00, 0x00, //    #######         #############
	0x1F, 0x80, 0x1F, 0xFE, 0x00, 0x03, 0x00, //    ######          ############               ##
	0x3F, 0x00, 0x0F, 0xFE, 0x00, 0x03, 0x00, //   ######            ###########               ##
	0x3E, 0x00, 0x0C, 0xC6, 0x00, 0x03, 0x80, //   #####             ##  ##   ##               ###
	0x7E, 0x00, 0x00, 0xC0, 0x00, 0x03, 0x80, //  ######                 ##                    ###
	0x7C, 0x00, 0x00, 0xC0, 0x00, 0x03, 0x80, //  #####                  ##                    ###
	0x7C, 0x00, 0x07, 0xF8, 0x00, 0x01, 0xC0, //  #####               ########                  ###
	0x78, 0x00, 0x0F, 0xFE, 0x00, 0x01, 0xC0, //  ####               ###########                ###
	0xF8, 0x00, 0x1F, 0xFF, 0x00, 0x01, 0xC0, // #####              #############               ###
	0xF8, 0x00, 0x3F, 0x1F, 0x00, 0x01, 0xC0, // #####             ######   #####               ###
	0xF0, 0x00, 0x7F, 0xFF, 0x80, 0x01, 0xC0, // ####             ################              ###
	0xF0, 0x00, 0x77, 0xFB, 0xC0, 0x01, 0xC0, // ####             ### ######## ####             ###
	0xF0, 0x00, 0x7F, 0xFF, 0xC0, 0x01, 0xC0, // ####             #################             ###
	0xF0, 0x00, 0x77, 0xFF, 0xC0, 0x01, 0xC0, // ####             ### #############             ###
	0xF0, 0x00, 0x77, 0xFF, 0xC0, 0x01, 0xC0, // ####             ### #############             ###
	0xF0, 0x1C, 0x77, 0xFF, 0xC6, 0x03, 0xC0, // ####       ###   ### #############   ##       ####
	0xF0, 0x7C, 0x7F, 0xFF, 0xC7, 0xC3, 0xC0, // ####     #####   #################   #####    ####
	0xF0, 0x7C, 0x7F, 0xFF, 0xCF, 0xC3, 0xC0, // ####     #####   #################  ######    ####
	0xF0, 0x7F, 0xFF, 0xFF, 0xEF, 0xC3, 0xC0, // ####     ########################## ######    ####
	0x70, 0x7F, 0xFF, 0xFF, 0xFF, 0xC7, 0xC0, //  ###     #################################   #####
	0x70, 0x7F, 0x9F, 0xFF, 0x7F, 0x87, 0xC0, //  ###     ########  ############# ########    #####
	0x70, 0x3F, 0x8F, 0xFE, 0x3F, 0x8F, 0xC0, //  ###      #######   ###########   #######   ######
	0x38, 0x3F, 0xC3, 0xF8, 0x7F, 0x0F, 0x80, //   ###     ########    #######    #######    #####
	0x38, 0x1F, 0xC0, 0x00, 0xFF, 0x1F, 0x80, //   ###      #######              ########   ######
	0x38, 0x0F, 0xC0, 0x00, 0xFE, 0x1F, 0x00, //   ###       ######              #######    #####
	0x18, 0x0F, 0xC0, 0x00, 0x7C, 0x3F, 0x00, //    ##       ######               #####    ######
	0x00, 0x07, 0x80, 0x00, 0x38, 0x7E, 0x00, //              ####                 ###    ######
	0x00, 0x00, 0x00, 0x00, 0x00, 0xFE, 0x00, //                                         #######
	0x00, 0x00, 0x00, 0x00, 0x01, 0xFC, 0x00, //                                        #######
	0x00, 0x00, 0x00, 0x00, 0x03, 0xF8, 0x00, //                                       #######
	0x00, 0x3E, 0x00, 0x00, 0x0F, 0xF0, 0x00, //           #####                     ########
	0x00, 0x7F, 0x80, 0x00, 0x3F, 0xE0, 0x00, //          ########                 #########
	0x00, 0x7F, 0xF8, 0x01, 0xFF, 0xC0, 0x00, //          ############          ###########
	0x00, 0x7F, 0xFF, 0xFF, 0xFF, 0x80, 0x00, //          ################################
	0x00, 0x3F, 0xFF, 0xFF, 0xFF, 0x00, 0x00, //           ##############################
	0x00, 0x1F, 0xFF, 0xFF, 0xFC, 0x00, 0x00, //            ###########################
	0x00, 0x07, 0xFF, 0xFF, 0xF0, 0x00, 0x00, //              #######################
	0x00, 0x00, 0xFF, 0xFF, 0xC0, 0x00, 0x00, //                 ##################
};

uint8_t logo_RCR_20x20[60] =
{
	0x01, 0xFE, 0x00, //        ########
	0x07, 0xFF, 0x00, //      ###########
	0x1F, 0xFF, 0x80, //    ##############
	0x3E, 0x07, 0x80, //   #####      ####
	0x3C, 0xF8, 0x00, //   ####  #####
	0x78, 0xF8, 0x30, //  ####   #####     ##
	0xF0, 0xF8, 0x30, // ####    #####     ##
	0xE0, 0xF0, 0x30, // ###     ####      ##
	0xE1, 0xF8, 0x10, // ###    ######      #
	0xC1, 0xFC, 0x10, // ##     #######     #
	0xC1, 0xFC, 0x10, // ##     #######     #
	0xCD, 0xFD, 0xB0, // ##  ## ####### ## ##
	0xCF, 0xFF, 0xB0, // ##  ############# ##
	0xCE, 0xFF, 0xB0, // ##  ### ######### ##
	0x6F, 0x77, 0xF0, //  ## #### ### #######
	0x67, 0x07, 0xF0, //  ##  ###     #######
	0x00, 0x01, 0xE0, //                ####
	0x0E, 0x03, 0xC0, //     ###       ####
	0x0F, 0xFF, 0x80, //     #############
	0x0F, 0xFF, 0x00, //     ############
};
 uint8_t logo_RCR_40x40 [200] =

{
	0x00, 0x00, 0xFF, 0x80, 0x00, //                 #########
	0x00, 0x0F, 0xFF, 0xF0, 0x00, //             ################
	0x00, 0x3F, 0xFF, 0xFC, 0x00, //           ####################
	0x00, 0x7F, 0xFF, 0xFF, 0x00, //          #######################
	0x01, 0xFE, 0x00, 0xFF, 0x00, //        ########         ########
	0x03, 0xF0, 0x00, 0x1F, 0x00, //       ######               #####
	0x07, 0xC0, 0x00, 0x07, 0x00, //      #####                   ###
	0x0F, 0x80, 0x00, 0x00, 0x00, //     #####
	0x0F, 0x01, 0xFF, 0x80, 0x00, //     ####       ##########
	0x1E, 0x01, 0xFF, 0x80, 0x00, //    ####        ##########
	0x3C, 0x00, 0xFF, 0x00, 0x00, //   ####          ########
	0x38, 0x00, 0x83, 0x00, 0x04, //   ###           #     ##             #
	0x78, 0x00, 0x10, 0x00, 0x04, //  ####              #                 #
	0x70, 0x00, 0x10, 0x00, 0x06, //  ###               #                 ##
	0x70, 0x00, 0x3C, 0x00, 0x06, //  ###              ####               ##
	0xE0, 0x00, 0xFF, 0x00, 0x02, // ###             ########              #
	0xE0, 0x01, 0xC7, 0x80, 0x02, // ###            ###   ####             #
	0xE0, 0x01, 0x99, 0x00, 0x03, // ###            ##  ##  #              ##
	0xC0, 0x02, 0x7C, 0x40, 0x03, // ##            #  #####   #            ##
	0xC0, 0x07, 0x7E, 0xC0, 0x03, // ##           ### ###### ##            ##
	0xC0, 0x06, 0xFE, 0xC0, 0x07, // ##           ## ####### ##           ###
	0xC0, 0x06, 0xFE, 0xC0, 0x07, // ##           ## ####### ##           ###
	0xC1, 0xC3, 0x7E, 0xC7, 0x87, // ##     ###    ## ###### ##   ####    ###
	0xC1, 0xE3, 0x3D, 0xC7, 0x86, // ##     ####   ##  #### ###   ####    ##
	0x41, 0xEF, 0x83, 0xF7, 0x8E, //  #     #### #####     ###### ####   ###
	0x40, 0xF1, 0xEF, 0x0F, 0x0E, //  #      ####   #### ####    ####    ###
	0x60, 0xF0, 0x6E, 0x1F, 0x0E, //  ##     ####     ## ###    #####    ###
	0x20, 0x78, 0x00, 0x1E, 0x1C, //   #      ####              ####    ###
	0x20, 0x7C, 0x00, 0x3E, 0x3C, //   #      #####            #####   ####
	0x00, 0x38, 0x00, 0x3C, 0x38, //           ###             ####    ###
	0x00, 0x10, 0x00, 0x18, 0x78, //            #               ##    ####
	0x00, 0x00, 0x00, 0x00, 0xF0, //                                 ####
	0x00, 0x00, 0x00, 0x01, 0xE0, //                                ####
	0x00, 0xC0, 0x00, 0x03, 0xC0, //         ##                    ####
	0x01, 0xF0, 0x00, 0x0F, 0xC0, //        #####                ######
	0x00, 0xFF, 0x00, 0x7F, 0x00, //         ########         #######
	0x00, 0xFF, 0xFF, 0xFE, 0x00, //         #######################
	0x00, 0x3F, 0xFF, 0xF8, 0x00, //           ###################
	0x00, 0x0F, 0xFF, 0xE0, 0x00, //             ###############
	0x00, 0x01, 0xFF, 0x00, 0x00, //                #########
};


uint8_t logo_DSTU_40x40 [200] =
{
	0x00, 0x01, 0xFC, 0x00, 0x00, //                #######
	0x00, 0x1F, 0xFF, 0xC0, 0x00, //            ###############
	0x00, 0x7E, 0x07, 0xF0, 0x00, //          ######      #######
	0x00, 0xF0, 0x00, 0x7C, 0x00, //         ####             #####
	0x03, 0xC0, 0x70, 0x1E, 0x00, //       ####       ###       ####
	0x07, 0x81, 0xFC, 0x0F, 0x00, //      ####      #######      ####
	0x0E, 0x07, 0x8F, 0x03, 0x80, //     ###      ####   ####      ###
	0x1C, 0x1E, 0x23, 0xC1, 0xC0, //    ###     ####   #   ####     ###
	0x18, 0x78, 0x00, 0xF0, 0xE0, //    ##    ####           ####    ###
	0x39, 0xE0, 0x00, 0x3C, 0xE0, //   ###  ####               ####  ###
	0x73, 0xFF, 0xFF, 0xFE, 0x70, //  ###  #########################  ###
	0x61, 0xFF, 0xFF, 0xFC, 0x30, //  ##    #######################    ##
	0x61, 0xFF, 0xFF, 0xFC, 0x30, //  ##    #######################    ##
	0xE0, 0xFB, 0xFF, 0x7C, 0x18, // ###     ##### ########## #####     ##
	0xC0, 0xD1, 0x35, 0x68, 0x18, // ##      ## #   #  ## # # ## #      ##
	0xC0, 0x91, 0x04, 0x68, 0x18, // ##      #  #   #     #   ## #      ##
	0xC0, 0x91, 0x04, 0x68, 0x18, // ##      #  #   #     #   ## #      ##
	0xC0, 0x91, 0x04, 0x68, 0x18, // ##      #  #   #     #   ## #      ##
	0xC0, 0x91, 0x04, 0x78, 0x0C, // ##      #  #   #     #   ####       ##
	0xC0, 0x91, 0x04, 0x78, 0x0C, // ##      #  #   #     #   ####       ##
	0xC0, 0x91, 0x04, 0x08, 0x18, // ##      #  #   #     #      #      ##
	0xC0, 0x91, 0x04, 0x18, 0x18, // ##      #  #   #     #     ##      ##
	0xC3, 0xFF, 0xDF, 0xFC, 0x18, // ##    ############ ###########     ##
	0xC3, 0xFF, 0xDF, 0xFC, 0x18, // ##    ############ ###########     ##
	0xE3, 0xFF, 0xDF, 0xFC, 0x38, // ###   ############ ###########    ###
	0x60, 0x00, 0x00, 0x00, 0x30, //  ##                               ##
	0x70, 0x1F, 0xDF, 0xC0, 0x30, //  ###       ####### #######        ##
	0x30, 0x10, 0x70, 0x40, 0x60, //   ##       #     ###     #       ##
	0x38, 0x30, 0x20, 0x60, 0xE0, //   ###     ##      #      ##     ###
	0x1C, 0x30, 0x20, 0x21, 0xC0, //    ###    ##      #       #    ###
	0x1E, 0x60, 0x20, 0x33, 0xC0, //    ####  ##       #       ##  ####
	0x07, 0x60, 0x20, 0x37, 0x80, //      ### ##       #       ## ####
	0x07, 0xFE, 0x23, 0xFF, 0x00, //      ##########   #   ##########
	0x01, 0xEF, 0xAF, 0xBC, 0x00, //        #### ##### # ##### ####
	0x00, 0xF9, 0xFC, 0xF8, 0x00, //         #####  #######  #####
	0x00, 0x3F, 0xBF, 0xE0, 0x00, //           ####### #########
	0x00, 0x0F, 0xFF, 0x80, 0x00, //             #############
	0x00, 0x00, 0xF8, 0x00, 0x00, //                 #####
	0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00,
};

uint8_t Sad_50x50[350] =
{
// 'images', 50x50px
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3f, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00,
0x7f, 0xff, 0xc0, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0xc0, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff,
0xc0, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0xc0, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0xc0, 0x00,
0x00, 0x00, 0x00, 0xff, 0xff, 0xc0, 0x00, 0x00, 0x00, 0x00, 0xc7, 0xf8, 0xc0, 0x00, 0x00, 0x00,
0x00, 0xe1, 0xe1, 0xc0, 0x00, 0x00, 0x00, 0x00, 0xf1, 0xe3, 0xc0, 0x00, 0x00, 0x00, 0x00, 0xe3,
0xf1, 0xc0, 0x00, 0x00, 0x00, 0x00, 0xc7, 0xf8, 0xc0, 0x00, 0x00, 0x00, 0x00, 0xfe, 0x1f, 0xc0,
0x00, 0x00, 0x00, 0x00, 0xfc, 0x0f, 0xc0, 0x00, 0x00, 0x00, 0x00, 0xff, 0xdf, 0xc0, 0x00, 0x00,
0x00, 0x00, 0xff, 0xff, 0xc0, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0xc0, 0x00, 0x00, 0x00, 0x00,
0xff, 0xff, 0xc0, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x7f, 0xff,
0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};

uint8_t Heart_50x50[350] =
{
// 'kisspng-vector-graphics-clip-art-pixel-8-bit-color-image-png-avatan-plus-5b7ceada0a0643', 50x50px
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1f,
0xfe, 0x0f, 0xff, 0x00, 0x00, 0x00, 0x3f, 0xfe, 0x1f, 0xff, 0x00, 0x00, 0x00, 0x3f, 0xfe, 0x1f,
0xff, 0x00, 0x00, 0x00, 0x3f, 0xfe, 0x1f, 0xff, 0x80, 0x00, 0x03, 0xff, 0xff, 0xff, 0xff, 0xf8,
0x00, 0x03, 0xff, 0xff, 0xff, 0xff, 0xf8, 0x00, 0x03, 0xff, 0xff, 0xff, 0xff, 0xf8, 0x00, 0x03,
0xff, 0xff, 0xfe, 0x1f, 0xf8, 0x00, 0x3f, 0xff, 0xff, 0xfe, 0x0f, 0xff, 0x00, 0x3f, 0xff, 0xff,
0xfe, 0x0f, 0xff, 0x00, 0x3f, 0xff, 0xff, 0xfe, 0x0f, 0xff, 0x00, 0x3f, 0xff, 0xff, 0xfe, 0x00,
0xff, 0x00, 0x3f, 0xff, 0xff, 0xff, 0xe0, 0xff, 0x00, 0x3f, 0xff, 0xff, 0xff, 0xe0, 0xff, 0x00,
0x3f, 0xff, 0xff, 0xff, 0xe0, 0xff, 0x00, 0x3f, 0xff, 0xff, 0xff, 0xe0, 0xff, 0x00, 0x3f, 0xff,
0xff, 0xff, 0xff, 0xff, 0x00, 0x3f, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00, 0x3f, 0xff, 0xff, 0xff,
0xff, 0xff, 0x00, 0x3f, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00, 0x3f, 0xff, 0xff, 0xff, 0xff, 0xff,
0x00, 0x3f, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00, 0x3f, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00, 0x1f,
0xff, 0xff, 0xff, 0xff, 0xff, 0x00, 0x03, 0xff, 0xff, 0xff, 0xff, 0xf8, 0x00, 0x03, 0xff, 0xff,
0xff, 0xff, 0xf8, 0x00, 0x03, 0xff, 0xff, 0xff, 0xff, 0xf8, 0x00, 0x03, 0xff, 0xff, 0xff, 0xff,
0xf0, 0x00, 0x00, 0x3f, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 0x3f, 0xff, 0xff, 0xff, 0x00, 0x00,
0x00, 0x3f, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 0x1f, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 0x01,
0xff, 0xff, 0xf0, 0x00, 0x00, 0x00, 0x01, 0xff, 0xff, 0xf0, 0x00, 0x00, 0x00, 0x01, 0xff, 0xff,
0xf0, 0x00, 0x00, 0x00, 0x01, 0xff, 0xff, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x1f, 0xff, 0x00, 0x00,
0x00, 0x00, 0x00, 0x1f, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1f, 0xff, 0x00, 0x00, 0x00, 0x00,
0x00, 0x1f, 0xfe, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01,
0xf0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xe0, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};

#endif /*EXTERNAL_SSD1306*/