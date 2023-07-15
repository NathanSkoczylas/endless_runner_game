#include "TextureUtility.hpp"

namespace UP {
namespace TextureUtil {

    //------------------------------------------------------------------------------------
    // Texture loading functions
    //------------------------------------------------------------------------------------
    Texture2D& LoadTexture(const char* fileName) {
        Texture2D texture{ 0 };

        Image image = LoadImage(fileName);

        if (image.data != NULL) {
            // Load texture from file into GPU memory (VRAM)
            texture = LoadTextureFromImage(image);
            UnloadImage(image);
        }

        return texture;
    }

}
}