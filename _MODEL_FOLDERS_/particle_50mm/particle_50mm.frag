uniform float counter1;
uniform float counter2;
uniform float counter3;
uniform float counter4;

varying vec4 position;

float distance;  
varying float attenuation;



vec3 normal;
vec4 finalcolor = vec4(1.0, 1.0, 1.0, 1.0);

varying vec3 lightDir1;

float NdotL1;

uniform sampler2D Texture1;
uniform sampler2D NormalMap;


void main( void )
{
    
    vec3 NormalTex            =  texture2D(NormalMap,  gl_TexCoord[0].st).xyz;
    NormalTex                 = (NormalTex - 0.5) * 2.0;
 	normal                    =  normalize(NormalTex);
    NdotL1                    =  dot(normal,lightDir1);
    
    finalcolor                =  texture2D(Texture1,gl_TexCoord[0].xy); 

  //  float specularLight       = pow(max(NdotL1, 0.0), gl_FrontMaterial.shininess*.1);  
  //  finalcolor               += specularLight;
    
    finalcolor.a              =  finalcolor.b;    //finalcolor.a              =  finalcolor.r - sin(counter1); 
   
    gl_FragColor              =  finalcolor * NdotL1;

}
