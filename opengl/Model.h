#include <glad/glad.h>
#include "Mesh.h"
#include "Shader.h"
#include "stb_image.h"

#include <vector>
#include <string>
#include <iostream>

#include <assimp/Importer.hpp>
#include <assimp/scene.h>
#include <assimp/postprocess.h>

class Model
{
public:
	/*  Functions   */
	Model(char* path);
	void Draw(Shader shader);
private:
	/*  Model Data  */
	std::vector<MeshData> meshes;
	std::string directory;
	std::vector<Texture> textures_loaded;
	/*  Functions   */
	void loadModel(std::string path);
	void processNode(aiNode *node, const aiScene *scene);
	MeshData processMesh(aiMesh *mesh, const aiScene *scene);
	std::vector<Texture> loadMaterialTextures(aiMaterial *mat, aiTextureType type, std::string typeName);
};