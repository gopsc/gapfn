







/*

 we use this function to save a piece of code

*/





 int action_seed_append (

                           const char * that_result,

                           const char * that_path,

                           const char * that_target

                        )

  {






/*

 it is so long to make path every file

 use this to make path here 


 and maybe use pointer








 this to save the name of the code

*/


 char  note_name [ 128 ];





 strcpy ( note_name, that_path );


 strcat ( note_name, that_target );









/*

 this is not easy, maybe the file is too long

 we can't read it

*/


/*

 char * note_words;

 note_words  =  malloc (   (  file_length ( that_target ) + 1  )   *   sizeof ( char );

 free ( note_words );

*/


 char note_words [ 102400 ];











/*

 sometimes this file isn't here

 maybe we should exit this seed

*/


 if (  ! is_file ( note_name )  )


  {



 output_print ( "string", "This file we can't find it:   " );

 output_print ( "string", note_name );

 output_print ( "string", "\n" );



 return 0;


  }









/*

 if this file exist

 prepare to add it

*/


 else


  {






/*

 make the title


 maybe we should make a buffer to note it

 append once to finish it

*/



 strcpy ( note_words, "\n//" );


 strcat ( note_words, "=========" );


 strcat ( note_words, "=========" );


 strcat ( note_words,  note_name );









/*

 titles don't have a same length,

 and of cause

*/


 if  (  63  >  ( int ) strlen ( note_name )  )


  {



 int i;

 for (

       i  =  0;

       i  <  63 - ( int ) strlen ( note_name );

       i  ++

     )

  {




 strcat ( note_words, "=" );



  }




  }








/*

 titile finished

*/


 strcat ( note_words, "\n" );



 file_append ( note_name, note_words );










/*

 get the convent

*/


 file_get ( note_name, note_words );







/*

 save it

*/


 file_append ( that_result, note_words );







 return 1;



  }







  }

















 int action_seed  (  const char * that_type  )


  {









/*

 where the code is

 and it could be changed

*/


 char  note_path [ 128 ];





 strcpy ( note_path,  gop_hopes . path_the  );

 strcat ( note_path, "/" );

 strcat ( note_path,  gop_hopes . name_the  );









/*

 the file we will make named flower

*/


 char note_file [ 128 ];







 strcpy ( note_file,  gop_hopes . path_the );

 strcat ( note_file, "/flower.c" );









/*

 there is a dirent named action

 we auto add file in that

*/


 char note_dirent [ 128 ];

 char note_name_action [ 128 ];




 DIR * pointer_dirent;

 struct  dirent *  ent;















/*

 clean it

*/


 file_save ( note_file,  "" );












 action_seed_append ( note_file, note_path, "/box/c/Linux/build/Linux.h" );

 action_seed_append ( note_file, note_path, "/box/c/Linux/build/flags.h" );





 action_seed_append ( note_file, note_path, "/watchdog/about/build/build.h" );

 action_seed_append ( note_file, note_path, "/watchdog/about/build/hopes.h" );



/*

 get them form a convent, maybe from network

*/

 action_seed_append ( note_file, note_path, "/watchdog/about/build/clean.h" );






/*

 dog will use

*/

 action_seed_append ( note_file, note_path, "/network/build/build.h" );

 action_seed_append ( note_file, note_path, "/network/build/hopes.h" );

 action_seed_append ( note_file, note_path, "/network/build/check.h" );

 action_seed_append ( note_file, note_path, "/network/build/clean.h" );




 action_seed_append ( note_file, note_path, "/sound/build/build.h" );

 action_seed_append ( note_file, note_path, "/sound/build/hopes.h" );






/*

 put this to the last of list of head and build

 then it can use the struct of configurations to note configurations everywhere


 but if we don't have them in code, we set a head of blank to fill it

*/


 action_seed_append ( note_file, note_path, "/box/c/Linux/build/hopes.h" );















/*

 maybe someday we will use it

*/


 action_seed_append ( note_file, note_path, "/box/c/Linux/data/translate/number_word.h" );



 action_seed_append ( note_file, note_path, "/box/c/Linux/system/output/print.h" );



 action_seed_append ( note_file, note_path, "/box/c/Linux/system/file-system/dirent/is.h" );

 
 action_seed_append ( note_file, note_path, "/box/c/Linux/system/file-system/file/is.h" );

 action_seed_append ( note_file, note_path, "/box/c/Linux/system/file-system/file/get.h" );

 action_seed_append ( note_file, note_path, "/box/c/Linux/system/file-system/file/save.h" );

 action_seed_append ( note_file, note_path, "/box/c/Linux/system/file-system/file/append.h" );


 action_seed_append ( note_file, note_path, "/box/c/Linux/system/process/deamon.h" );

 action_seed_append ( note_file, note_path, "/box/c/Linux/system/commandline/shell.h" );



 action_seed_append ( note_file, note_path, "/box/c/Linux/data/secret/secret.h" );







 action_seed_append ( note_file, note_path, "/watchdog/note/save.h" );

 action_seed_append ( note_file, note_path, "/watchdog/note/clear.h" );








 action_seed_append ( note_file, note_path, "/watchdog/about/build/put.h" );

 action_seed_append ( note_file, note_path, "/watchdog/about/build/load.h" );





/*

 get them from system

*/

 action_seed_append ( note_file, note_path, "/watchdog/about/system/name.h" );

 action_seed_append ( note_file, note_path, "/watchdog/about/system/build.h" );


 action_seed_append ( note_file, note_path, "/watchdog/about/ip/build.h" );



 action_seed_append ( note_file, note_path, "/watchdog/about/cpu/rate.h" );

 action_seed_append ( note_file, note_path, "/watchdog/about/cpu/temperature.h" );

 action_seed_append ( note_file, note_path, "/watchdog/about/cpu/frequency.h" );

 action_seed_append ( note_file, note_path, "/watchdog/about/cpu/cores.h" );

 action_seed_append ( note_file, note_path, "/watchdog/about/cpu/build.h" );




 action_seed_append ( note_file, note_path, "/watchdog/about/memory/build.h" );

// action_seed_append ( note_file, note_path, "/watchdog/about/disk/build.h" );

 action_seed_append ( note_file, note_path, "/watchdog/about/sound/alsa.h" );




// action_seed_append ( note_file, note_path, "/watchdog/check/root.h" );

 action_seed_append ( note_file, note_path, "/watchdog/check/network.h" );

 action_seed_append ( note_file, note_path, "/watchdog/check/power.h" );

 action_seed_append ( note_file, note_path, "/watchdog/check/update.h" );



 action_seed_append ( note_file, note_path, "/watchdog/load/hope.h" );

 action_seed_append ( note_file, note_path, "/watchdog/load/symbol.h" );

 action_seed_append ( note_file, note_path, "/watchdog/load/listen.h" );



 action_seed_append ( note_file, note_path, "/watchdog/show/about.h" );




 action_seed_append ( note_file, note_path, "/watchdog/dog.h" );







 action_seed_append ( note_file, note_path, "/sound/ft/show.h" );

 action_seed_append ( note_file, note_path, "/sound/ft/dft.h" );

 action_seed_append ( note_file, note_path, "/sound/ft/fft.h" );

 action_seed_append ( note_file, note_path, "/sound/ft/test.h" );






/*

 add the sound code

*/

 if  (  strcmp ( that_type, "base" )  ==  0  )


  {


 action_seed_append ( note_file, note_path, "/sound/corde/blank.h" );


  }





 else if  (  strcmp ( that_type, "alsa" )  ==  0  )


  {

 action_seed_append ( note_file, note_path, "/sound/corde/alsa.h" );


  }







/*

 The data code
  is for send some data
  in the network connection


  like rain, shine ...

*/

 action_seed_append ( note_file, note_path, "/network/message/data/update/build.h" );

 action_seed_append ( note_file, note_path, "/network/message/data/update/backup.h" );

 action_seed_append ( note_file, note_path, "/network/message/data/update/append.h" );

 action_seed_append ( note_file, note_path, "/network/message/data/update/next.h" );

 action_seed_append ( note_file, note_path, "/network/message/data/update/load.h" );





/*

 Append the action codes
 it's instatic

*/

 strcpy ( note_dirent, note_path );

 strcat ( note_dirent, "/network/message/action" );



 pointer_dirent  =  opendir ( note_dirent );






 do


  {




 ent  =  readdir ( pointer_dirent );




 if  (  ent != NULL  &&  ent -> d_type == 8  )


  {



 strcpy (

          note_file_action,

          strstr ( note_dirent,  gop_configurations . name_the ) + strlen ( gop_configurations . name_the )

        );


 strcat ( note_file_action, "/" );

 strcat ( note_file_action, ent->d_name );




 action_seed_append (
                      note_file,
                      note_path,
                      note_file_action

                    );




  }


  } while ( ent != NULL );






 closedir ( pointer_dirent );








/*

 the module of judge
 means to take the words get on network

 the plan is using the trees system

*/


 action_seed_append ( note_file, note_path, "/network/message/judge/blank.h" );

 action_seed_append ( note_file, note_path, "/network/message/judge/hello.h" );

 action_seed_append ( note_file, note_path, "/network/message/judge/who.h" );

 action_seed_append ( note_file, note_path, "/network/message/judge/information.h" );

 action_seed_append ( note_file, note_path, "/network/message/judge/command.h" );






/*

 appending data to the message

*/

 action_seed_append ( note_file, note_path, "/network/message/data/build.h" );





/*

 build the network message system

*/

 action_seed_append ( note_file, note_path, "/network/message/build.h" );





/*

 the translate system of network

*/

 action_seed_append ( note_file, note_path, "/network/tcp/connectted.h" );

 action_seed_append ( note_file, note_path, "/network/tcp/connector.h" );






/*

 build the

*/

 action_seed_append(  note_file, note_path, "/build.c" );






/*

 that's ok !

 :)

*/

 return 1;}

