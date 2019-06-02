(load "./braidboard/element.lisp")

(defclass cell ()
  ((xposition
     :initarg :xposition
     :type integer
     :accessor cell-xposition)
   (yposition
     :initarg :yposition
     :type integer
     :accessor cell-yposition)
   (element 
     :initarg :element
     :initform nil
     :accessor cell-element)))

(defun make-cell (xposition yposition element)
  (make-instance 'cell :xposition xposition :yposition yposition :element element))

(defun make-cells (width height)
  ; MAKE 2D list of cells to give back?/ i dunno how this works
  (loop for x from 0 to width 
        do (loop for y from 0 to height 
                 do (make-cell x y (make-empty-element)))))
