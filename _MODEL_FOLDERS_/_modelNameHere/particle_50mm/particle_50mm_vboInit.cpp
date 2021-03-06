glGenBuffersARB(1, &particle_50mm_vboID);
glBindBufferARB(GL_ARRAY_BUFFER_ARB, particle_50mm_vboID);
glBufferDataARB(GL_ARRAY_BUFFER_ARB,       sizeof(particle_50mm_VERT) + sizeof(particle_50mm_NORM) + sizeof(particle_50mm_TEX) + sizeof(particle_50mm_VELOCITY), 0, GL_STATIC_DRAW_ARB);
glBufferSubDataARB(GL_ARRAY_BUFFER_ARB, 0,                                                                                        sizeof(particle_50mm_VERT), particle_50mm_VERT);
glBufferSubDataARB(GL_ARRAY_BUFFER_ARB,    sizeof(particle_50mm_VERT),                                                           sizeof(particle_50mm_NORM), particle_50mm_NORM);
glBufferSubDataARB(GL_ARRAY_BUFFER_ARB,    sizeof(particle_50mm_VERT) + sizeof(particle_50mm_NORM),                             sizeof(particle_50mm_TEX),  particle_50mm_TEX);
glBufferSubDataARB(GL_ARRAY_BUFFER_ARB,    sizeof(particle_50mm_VERT) + sizeof(particle_50mm_NORM)+ sizeof(particle_50mm_TEX), sizeof(particle_50mm_VELOCITY), particle_50mm_VELOCITY);
    loadTexture("_MODEL_FOLDERS_/particle_50mm/particle_50mm_DOT3.bmp",   normalMap[530]);
    loadTexture("_MODEL_FOLDERS_/particle_50mm/particle_50mm.jpg",        textureMap[530]);
    //loadTexture("_MODEL_FOLDERS_/particle_50mm/particle_50mm_BUMP.jpg", specularMap[530]);
