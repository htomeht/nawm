(* cascading.ml
 *
 * This module contains code that makes cascading layers a possibility
 * All you need should be contained here. If it isn't tough.  
 *
 *)
open Constants

(* Implements layer from layer.ml *)
class cascading =
object(self)
  inherit Layer.layer

  (* Variables *)

  let status = Normal
  (* More allowing than I'd like, I would like for it to only allow the
   * window type in the list *)
  let windows = DynArray.create()
  

  (* Methods *)

  method get_status : string
  method set_status : string -> unit
  method add_window : window -> unit
  method rem_window : window -> unit
end
