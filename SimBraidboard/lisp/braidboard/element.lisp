(defclass element ()
  ((label      
     :initarg  :label
     :initform "Em"
     :accessor element-label)
   (colour     
     :initarg  :colour
     :initform "ffffff"
     :accessor element-colour)
   (pattern    
     :initarg  :pattern
     :initform nil
     :accessor element-pattern)))



(defun make-empty-element ()
  (make-instance 'element :label "Em" :colour "ffffff" :pattern nil))


