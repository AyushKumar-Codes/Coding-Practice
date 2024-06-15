import { CommonModule } from '@angular/common';
import { Component,Input, inject} from '@angular/core';
import { FormBuilder, FormGroup, ReactiveFormsModule, Validators} from '@angular/forms';
import { Studentstruct } from '../studentstruct';
import { StudentService } from '../student.service';
import {  Router,RouterModule } from '@angular/router';



 
@Component({
  selector: 'app-add-student',
  standalone: true,
  imports: [ReactiveFormsModule,CommonModule,RouterModule],
  templateUrl: './add-student.component.html',
  styleUrl: './add-student.component.css'
})
export class AddStudentComponent {
  // route:ActivatedRoute=inject(ActivatedRoute);
  // studentservice=inject(StudentService);
  // studentForm:FormGroup|any;


  // studentstruct:Studentstruct[]|undefined;

  //  @Input() studentstruct!:Studentstruct;

   studentForm: FormGroup|any;
  // constructor(private fb: FormBuilder) { }
  constructor(private fb: FormBuilder,private studentservice:StudentService,private rt:Router) { 
    this.studentForm = this.fb.group({
      Sname: ['', (Validators.required,Validators.minLength(5))],
      Sroll: ['', Validators.required],
      Sclass:['',Validators.required]
    });
  }
  submitForm():void{
    if (this.studentForm.valid) {
      console.log('Form submitted!');
      console.log('Sname:', this.studentForm.value.Sname);
      console.log('Sroll:', this.studentForm.value.Sroll);
      console.log('Sclass:', this.studentForm.value.Sclass);
      this.studentservice.addDataEntry(this.studentForm.value);
      this.rt.navigateByUrl('/student-details')

    
        
    alert("working")
    console.log(this.studentForm.value);
    this.studentForm.reset();
    }
  
       
   
    
     
   }
   
  Clear(){
    alert("cleared")
    this.studentForm.reset();
  }

  


    
  }



