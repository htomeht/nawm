(* layer.ml                                                        
 *                                                                 
 *  Defines functions and types for handling layers.                
 *                                                                 
 *)                                                                 

(* Objects in cascading.ml and tiling.ml (and others) will implement
   this abstract base class. *)

class virtual layer = 
object(self)
  method virtual get_status : string
  method virtual set_status : string -> unit
  method virtual add_window : window -> unit
  method virtual rem_window : window -> unit
end
